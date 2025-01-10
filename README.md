
# Création, parcours et manipulation d'un arbre binaire de recherche
Ce projet est une application en langage C qui permet d'entrer les données d'un arbre binaire de recherche afin d'en afficher les extremums et manipuler ses différents nœuds. 


## Fonctionnalités

![Fonctionalités](./Fonctionnalités.png "Fonctionnalités de l'application")

- Ajouter des valeurs à l'arbre binaire.
- Faire un parcours infixé, post-fixé ou préfixé de l'arbre binaire.
- Afficher les nœuds minimum, maximum, le prédécesseur ou le successeur d'un nœud.
- Rechercher un nœud dans l'arbre binaire de recherche.
- Supprimer un nœud de l'arbre binaire.

---
## Installation et Compilation

1. Cloner le dépôt
Clonez le projet depuis GitHub :
```sh
git clone https://github.com/johanalain11/parcours-abr.git
cd parcours-abr
```
2. Compiler le code
```sh
make
```
3. Exécuter l'application
```sh
./programme
```

---
## Utilisation
1. Lancez le programme.
2. Choisir l'opération à effectuer sur l'arbre binaire dans le menu :
    * Ajouter une valeur.
    * Parcourir l'arbre.
    * Afficher le nœud minimum.
    * Afficher le nœud maximum.
    * Rechercher un nœud.
    * Afficher le prédécesseur.
    * Afficher le successeur.
    * Supprimer un nœud.
    * Quitter le programme.

---
## Exemple d'exécution
![Exemple d'exécution](./exec.png "Capture d'ajout d'une valeur")

---
## Structure de données
Chaque arbre binaire est représenté par une structure ABR :
```c
struct ABR
{
    int Cle;
    struct ABR* Parent;
    struct ABR* Gauche;
    struct ABR* Droit;
};
 typedef struct ABR ABR;
```

---
## Technologies Utilisées
**Langage de programmation :** C

**Compilateur :** GCC

---
## Améliorations Futures
>[!NOTE]
>
>* Ajouter une interface graphique.
>* Ajouter un système de manipulation de plusieurs arbre binaires.
>* Gérer les erreurs potentielles, comme des entrées invalides ou des dépassements de mémoire.
>* Ajouter un système de sauvegarde et de chargement des données dans un fichier.

## Auteur
**Johan Alain**

[GitHub](https://github.com/johanalain11/)
