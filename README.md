# Création, parcours et manipulation d'un arbre binaire de recherche

![GitHub repo size](https://img.shields.io/github/repo-size/johanalain11/parcours-abr)
![GitHub last commit](https://img.shields.io/github/last-commit/johanalain11/parcours-abr)
![GitHub license](https://img.shields.io/github/license/johanalain11/etudiant-cotisation)
![C](https://img.shields.io/badge/Language-C-blue)
![GCC](https://img.shields.io/badge/Compiler-GCC-orange)

Ce projet est une application en langage C qui permet d'entrer les données d'un arbre binaire de recherche afin d'en afficher les extrêmes et manipuler ses différents nœuds.

## 🚀 Fonctionnalités

![Fonctionnalités](./Fonctionnalités.png "Fonctionnalités de l'application")

✅ Ajouter des valeurs à l'arbre binaire.
✅ Effectuer un parcours infixé, post-fixé ou préfixé de l'arbre binaire.
✅ Afficher les nœuds minimum, maximum, le prédécesseur ou le successeur d'un nœud.
✅ Rechercher un nœud dans l'arbre binaire de recherche.
✅ Supprimer un nœud de l'arbre binaire.

---
## 🛠️ Installation et Compilation

### 1️⃣ Cloner le dépôt
Clonez le projet depuis GitHub :
```sh
git clone https://github.com/johanalain11/parcours-abr.git
cd parcours-abr
```
### 2️⃣ Compiler le code
```sh
make
```
### 3️⃣ Exécuter l'application
```sh
./programme
```

---
## 📌 Utilisation
1. Lancez le programme.
2. Choisissez l'opération à effectuer sur l'arbre binaire dans le menu :
   - ➕ Ajouter une valeur.
   - 🔄 Parcourir l'arbre.
   - 📉 Afficher le nœud minimum.
   - 📈 Afficher le nœud maximum.
   - 🔍 Rechercher un nœud.
   - ⏪ Afficher le prédécesseur.
   - ⏩ Afficher le successeur.
   - 🗑️ Supprimer un nœud.
   - 🚪 Quitter le programme.

---
## 🖥️ Exemple d'exécution
![Exemple d'exécution](./exec.png "Capture d'ajout d'une valeur")

---
## 📂 Structure de données
Chaque arbre binaire est représenté par la structure suivante :
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
## 🛠️ Technologies Utilisées
- **Langage de programmation :** C
- **Compilateur :** GCC

---
## 🔮 Améliorations Futures
>[!NOTE]
>
>* 📌 **Ajout d'une interface graphique.**
>* 📌 **Gestion de plusieurs arbres binaires simultanément.**
>* 📌 **Validation robuste des entrées utilisateur.**
>* 📌 **Gestion des erreurs (entrées invalides, dépassements de mémoire, etc.).**
>* 📌 **Sauvegarde et chargement des données dans un fichier.**

---
## 👨‍💻 Auteur
**Johan Alain**  
📌 [GitHub](https://github.com/johanalain11/)
