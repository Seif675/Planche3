#include <iostream>
#include <vector>
#include <utility>
using namespace std;
vector<int> remplirVecteur(int taille) {
    vector<int> vecteur(taille);
    cout << "Entrez les valeurs du tableau :" << endl;
    for (int i = 0; i < taille; i++) {
        cin >> vecteur[i];
    }
    return vecteur;
}
pair<int, int> mini_maxi(const vector<int>& A) {
    int min_val = A[0];
    int max_val = A[0];
    for (int i = 1; i < A.size(); i++) {
        if (A[i] < min_val) {
            min_val = A[i];
        }
        if (A[i] > max_val) {
            max_val = A[i];
        }
    }
    return make_pair(min_val, max_val);
}
int main()
{
    int taille;
    cout << "Entrez la taille du tableau : ";
    cin >> taille;
    vector<int> tableau = remplirVecteur(taille);
    pair<int, int> resultat = mini_maxi(tableau);
    cout << "La plus petite valeur est : " << resultat.first << endl;
    cout << "La plus grande valeur est : " << resultat.second << endl;
    return 0;
}
