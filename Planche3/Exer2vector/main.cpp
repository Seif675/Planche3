#include <iostream>
#include <vector>
using namespace std;

vector<int> remplir(int taille) {
    vector<int> tableau(taille);
    cout << "Entrer les valeurs du tableau :" << endl;
    for (int i = 0; i < taille; i++) {
        cin >> tableau[i];
    }
    return tableau;
}

void rechercher(const vector<int>& tableau, int valeur) {
    bool trouve = false;
    for (int i = 0; i < tableau.size(); i++) {
        if (tableau[i] == valeur) {
            cout << "La valeur " << valeur << " se trouve dans le tableau à la position " << i << endl;
            trouve = true;
            break;
        }
    }
    if (!trouve) {
        cout << "La valeur " << valeur << " ne se trouve pas dans le tableau." << endl;
    }
}

int main() {
    int taille;
    cout << "Entrer la taille du tableau : ";
    cin >> taille;

    vector<int> tableau = remplir(taille);

    int valeur;
    cout << "Entrer la valeur a rechercher : ";
    cin >> valeur;

    rechercher(tableau, valeur);

    return 0;
}

