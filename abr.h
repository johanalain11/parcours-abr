#ifndef ABR_H
#define ABR_H

    struct ABR
    {
        int Cle;
        struct ABR* Parent;
        struct ABR* Gauche;
        struct ABR* Droit;
    };
    typedef struct ABR ABR;
    
    ABR* creer_ABR(int val, ABR* gauche, ABR* droit);
    void clearconsole();
    void prefixe(ABR* a);
    void infixe(ABR* a);
    void postfixe(ABR* a);
    ABR* rechercher2(ABR* a, int val);
    ABR* maximum(ABR* a);
    ABR* minimum(ABR* a);
    ABR* ajouter_racine(ABR*a, ABR* b);
    ABR* successeur(ABR* a, int val);
    ABR* predecesseur(ABR* a, int val);
    int  rechercher(ABR* a, int val);
    ABR* ajouter_feuille(ABR* a, int val);
    ABR* supprimer(ABR* a, int val);

#endif
