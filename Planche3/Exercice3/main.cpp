#include <iostream>
#include <vector>
using namespace std;
vector<int> remplirVecteur(int taille) {
    vector<int> vecteur(taille);
    cout << "Entrer les valeurs du vecteur :" << endl;
    for (int i = 0; i < taille; i++) {
        cin >> vecteur[i];
    }
    return vecteur;
}
int produitScalaire(const vector<int>& U, const vector<int>& V) {
    int produit = 0;
    for (int i = 0; i < U.size(); i++) {
        produit += U[i] * V[i];
    }
    return produit;
}
int main()
{
    int taille;
    cout << "Entrez la taille des vecteurs : ";
    cin >> taille;
    cout << "Remplissage du vecteur U :" << endl;
    vector<int> U = remplirVecteur(taille);
    cout << "Remplissage du vecteur V :" << endl;
    vector<int> V = remplirVecteur(taille);
    int resultat = produitScalaire(U, V);
    cout << "Le produit scalaire de U et V est : " << resultat << endl;
    return 0;
}
