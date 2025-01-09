#include <stdio.h>
#include <stdlib.h>
#include "abr.h"

int main()
{
    ABR* a = NULL;
    ABR* b = NULL;
    int nbre = 0;
    int choix = 0;

    while (choix != 9)
    {
        printf(" 1 : Ajouter une valeur \n 2 : Parcours de l'arbre \n 3 : Noeud minimum \n 4 : Noeud maximum\n 5 : Rechercher un noeud\n 6 : Predecesseur \n 7 : Successeur \n 8 : Supprimer un noeud \n 9 : Quitter\n");
        printf("Entrez votre choix\n");
        scanf("%d", &choix);

        switch(choix)
        {
            case 1 :
                clearconsole();
                printf("1 : Ajouter en feuille\n2 : Ajouter a la racine\n");
                printf("Entrez votre choix\n");
                scanf("%d", &choix);
                
                switch(choix)
                {
                    case 1:
                        clearconsole();
                        printf("Entrez la valeur a ajouter en feuille\n");
                        scanf("%d", &nbre);
                        a = ajouter_feuille(a, nbre);
                        system("pause");
                        clearconsole();
                    break;

                    case 2:
                        clearconsole();
                        printf("Entrez la valeur a ajouter a la racine\n");
                        scanf("%d", &nbre);
                        b = creer_ABR(nbre, NULL, NULL);
                        a = ajouter_racine(a, b);
                        system("pause");
                        clearconsole();
                    break;
                
                    default:
                        clearconsole();
                        printf("Choix indisponible\n");
                        system("pause");
                        clearconsole();
                    break;
                }
            break;

            case 2:
                clearconsole();
                printf("1 : Parcours infixe\n2 : Parcours postfice\n3 : Parcours prefixe\n");
                printf("Entrez votre choix\n");
                scanf("%d", &choix);
                clearconsole();

                switch(choix)
                {
                    case 1:
                        clearconsole();
                        printf("Parcours infixe :\n");
                        infixe(a);
                        printf("\n");
                        system("pause");
                        
                    break;

                    case 2:
                        clearconsole();
                        printf("Parcours postfixe :\n");
                        postfixe(a);
                        printf("\n");
                        system("pause");
                        
                    break;

                    case 3:
                        clearconsole();
                        printf("Parcours prefixe :\n");
                        prefixe(a);
                        printf("\n");
                        system("pause");
                        
                    break;
                    
                    default:
                      printf("Valeur invalide\n");
                      break;
                }
            break;

            case 3:
                clearconsole();
                printf("Le noeud minimum de l'arbre est %d\n",minimum(a)->Cle);
                system("pause");
                clearconsole();
            break;

            case 4:
                clearconsole();
                printf("Le noeud maximum de l'arbre est %d\n",maximum(a)->Cle);
                system("pause");
                clearconsole();
            break;

            case 5:
                clearconsole();
                printf("Entrez la valeur a rechercher\n");
                scanf("%d",&nbre);
                if(rechercher2(a, nbre) == NULL)
                {
                    printf("Cette valeur n'est pas dans l'arbre\n");
                }
                else
                {
                    printf("La valeur existe dans l'arbre (%d)\n",rechercher2(a, nbre)->Cle);
                }
                system("pause");
                clearconsole();
            break;

            case 6:
                clearconsole();
                printf("Entrez la valeur dont vous voulez connaitre le predecesseur\n");
                scanf("%d",&nbre);
                if(rechercher2(a, nbre) == NULL)
                {
                    printf("Cette valeur n'est pas dans l'arbre\n");
                }
                else
                {
                    printf("Le predecesseur de %d est %d",nbre, predecesseur(a, nbre)->Cle);
                }
                system("pause");
                clearconsole();
            break;
                
            case 7:
                clearconsole();
                printf("Entrez la valeur dont vous voulez connaitre le successeur\n");
                scanf("%d",&nbre);
                if(rechercher2(a, nbre) == NULL)
                {
                    printf("Cette valeur n'est pas dans l'arbre\n");
                }
                else
                {
                    printf("Le successeur de %d est %d",nbre, successeur(a, nbre)->Cle);
                }
                system("pause");
                clearconsole();
            break;

            case 8:
                clearconsole();
                printf("Entrez la valeur a supprimer\n");
                scanf("%d",&nbre);
                if(rechercher2(a, nbre) == NULL)
                {
                    printf("Impossible de supprimer cette valeur n'est pas dans l'arbre\n");
                }
                else
                {
                    a = supprimer(a, nbre);
                }
                system("pause");
                clearconsole();
            break;

            case 9: break;

            default:
            clearconsole();
            printf("Choix indisponible\n");
            system("pause");
            clearconsole();
            break;
        }
    }

    return 0;
}
