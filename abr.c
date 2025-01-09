#include <stdio.h>
#include <stdlib.h>
#include "abr.h"

void clearconsole()
{
  /**#if defined(_WIN32) || defined(_WIN64)
        system("cls");
  #else
        system("clear");
  #endif
  **/
}

ABR* creer_ABR(int val, ABR* gauche, ABR* droit)
{
    ABR* a = malloc(sizeof(*a));
    a->Cle = val;
    a->Gauche = gauche;
    a->Droit = droit;
    a->Parent = NULL;
}

void prefixe(ABR* a)
{
    if(a == NULL)
    {
        return;
    }

    printf("%d ,",a->Cle);
    prefixe(a->Gauche);
    prefixe(a->Droit);
}

void infixe(ABR* a)
{
    if(a == NULL)
    {
        return;
    }

    infixe(a->Gauche);
    printf("%d ,",a->Cle);

    infixe(a->Droit);
}

ABR* ajouter_racine(ABR*a, ABR* b)
{
    if(a == NULL)
    {
        return b;
    }

    ajouter_racine(a->Gauche, b);
    ajouter_feuille(b, a->Cle);
    ajouter_racine(a->Droit, b);

    return b;
}

void postfixe(ABR* a)
{
    if (a == NULL)
    {
        return;
    }

    postfixe(a->Gauche);
    postfixe(a->Droit);
    printf("%d ,",a->Cle);
}

ABR* rechercher2(ABR* a, int val)
{
    if (a == NULL)
    {
        return a;
    }
    
    if(a->Cle == val)
    {
        return a;
    }

    if(val > a->Cle)
    {
        return rechercher2(a->Droit, val);
    }
    else
    {
        return rechercher2(a->Gauche, val);
    }
}

ABR* maximum(ABR* a)
{
    if(a == NULL)
    {
        return a;
    }
    else
    {
        while (a->Droit != NULL)
        {
            a = a->Droit;
        }
        return a;
    }
}

ABR* minimum(ABR* a)
{
    if(a == NULL)
    {
        return a;
    }
    else
    {
        while (a->Gauche != NULL)
        {
            a = a->Gauche;
        }
        return a;
    }
}

ABR *successeur(ABR* a, int val)
{
    ABR* tmp = rechercher2(a, val);
    if (tmp == NULL)
    {
        return NULL;
    }

    if (tmp->Droit!=NULL)
    {
       return minimum(tmp->Droit);
    }

    ABR *succ=NULL;
    while (a!=NULL) 
    {
        if (tmp->Cle < a->Cle) 
        {
            succ = a;
            a = a->Gauche;
        }
        else if (tmp->Cle > a->Cle)
        {
            a = a->Droit;
        }
        else
        {
            break;
        }
    }
    return succ;
 }

 ABR *predecesseur(ABR* a, int val)
 {
     ABR *tmp=rechercher2(a,val);
    if (tmp==NULL)
        return NULL;
    if (tmp->Gauche!=NULL)
        return maximum(tmp->Gauche);
    ABR *pred = NULL;
    while (a!=NULL) {
        if (tmp->Cle > a->Cle) 
        {
            pred = a;
            a = a->Droit;
        }
        else if (tmp->Cle < a->Cle)
            a=a->Gauche;
        else
            break;
    }
    return pred;
}


int rechercher(ABR* a, int val)
{
    int in = 0;
    //0 = Vrai et 1 = Faux
    
    if(rechercher2(a, val) == NULL)
    {
        in = 1;
    }
    else
    {
        in = 0;
    }
    
    return in;
}

ABR* ajouter_feuille(ABR* a, int val)
{
    ABR* new = creer_ABR(val, NULL, NULL);
    
    if(a == NULL)
    {
        return new;
    }
    
    if(val > a->Cle)
    {
        if(a->Droit == NULL)
        {  
            a->Droit = new;
            new->Parent = a;
        }
        else
        {
            ajouter_feuille(a->Droit, val);
        }
    }
    else
    {
        if(a->Gauche == NULL)
        {
            a->Gauche = new;
            new->Parent = a;
        }
        else
        {
            ajouter_feuille(a->Gauche, val);
        }
    }

    return a;
}

ABR* supprimer(ABR* a, int val)
{
    if(a == NULL)
    {
        return a;
    }

    if(val < a->Cle)
    {
        a->Gauche = supprimer(a->Gauche, val);
    }
    else if (val > a->Cle)
    {
        a->Droit = supprimer(a->Droit, val);
    }
    else
    {
        if(a->Gauche == NULL && a->Droit == NULL)
        {
            free(a);
            a = NULL;
        }
        else if(a->Gauche == NULL)
        {
            ABR* tmp = a;
            a = a->Droit;
            free(tmp);
        }
        else if(a->Droit == NULL)
        {
            ABR* tmp = a;
            a = a->Gauche;
            free(tmp);
        }
        else
        {
            ABR* tmp = minimum(a->Droit);
            a->Cle = tmp->Cle;
            a->Droit = supprimer(a->Droit, tmp->Cle);
        }
    }
    return a;
}
