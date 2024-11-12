#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

struct Ville {
    string nom;
    double latitude;
    double longitude;
};
void ajouterVille(vector<Ville>& villes, const string& nom, double latitude, double longitude) {
    villes.push_back({nom, latitude, longitude});
}
void ajouterVille(unordered_map<string, Ville>& villes, const string& nom, double latitude, double longitude) {
    villes[nom] = {nom, latitude, longitude};
}
void rechercherVille(const vector<Ville>& villes, const string& nom) {
    for (const auto& ville : villes) {
        if (ville.nom == nom) {
            cout << "Ville trouvee : " << ville.nom
                 << " | Latitude : " << ville.latitude
                 << " | Longitude : " << ville.longitude << endl;
            return;
        }
    }
    cout << "La ville " << nom << " n'a pas ete trouvee." << endl;
}
void rechercherVille(const unordered_map<string, Ville>& villes, const string& nom) {
    auto it = villes.find(nom);
    if (it != villes.end()) {
        cout << "Ville trouvee : " << it->second.nom
             << " | Latitude : " << it->second.latitude
             << " | Longitude : " << it->second.longitude << endl;
    } else {
        cout << "La ville " << nom << " n'a pas ete trouvee." << endl;
    }
}

int main() {
    int choix;
    cout << "Choisissez la methode de stockage des villes : 1 pour vector, 2 pour unordered_map : ";
    cin >> choix;

    if (choix == 1) {
        vector<Ville> villes;
        ajouterVille(villes, "Tunis", 36.8065, 10.1815);
        ajouterVille(villes, "Sfax", 34.7406, 10.7603);
        ajouterVille(villes, "Sousse", 35.8256, 10.6369);

        string nom;
        cout << "Entrez le nom de la ville a rechercher : ";
        cin >> nom;
        rechercherVille(villes, nom);

    } else if (choix == 2) {
        unordered_map<string, Ville> villes;
        ajouterVille(villes, "Tunis", 36.8065, 10.1815);
        ajouterVille(villes, "Sfax", 34.7406, 10.7603);
        ajouterVille(villes, "Sousse", 35.8256, 10.6369);

        string nom;
        cout << "Entrez le nom de la ville à rechercher : ";
        cin >> nom;
        rechercherVille(villes, nom);

    } else {
        cout << "Choix invalide." << endl;
    }

    return 0;
}
