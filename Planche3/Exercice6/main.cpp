#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Ville {
    std::string nom;
    double latitude;
    double longitude;
};

void ajouterVille(std::vector<Ville>& villes, const std::string& nom, double latitude, double longitude) {
    villes.push_back({nom, latitude, longitude});
}

void rechercherVille(const std::vector<Ville>& villes, const std::string& nom) {
    for (const auto& ville : villes) {
        if (ville.nom == nom) {
            std::cout << "Ville trouvee : " << ville.nom
                      << " | Latitude : " << ville.latitude
                      << " | Longitude : " << ville.longitude << std::endl;
            return;
        }
    }
    std::cout << "La ville " << nom << " n'a pas ete trouvee." << std::endl;
}

void afficherVilles(const std::vector<Ville>& villes) {
    for (const auto& ville : villes) {
        std::cout << ville.nom << " | Latitude : " << ville.latitude
                  << " | Longitude : " << ville.longitude << std::endl;
    }
}

void trierVilles(std::vector<Ville>& villes) {
    std::sort(villes.begin(), villes.end(), [](const Ville& v1, const Ville& v2) {
        return v1.nom < v2.nom;
    });
}

int main() {
    std::vector<Ville> villes;

    ajouterVille(villes, "Tunis", 36.8065, 10.1815);
    ajouterVille(villes, "Sfax", 34.7406, 10.7603);
    ajouterVille(villes, "Sousse", 35.8256, 10.6369);

    std::cout << "Villes avant tri :" << std::endl;
    afficherVilles(villes);

    trierVilles(villes);

    std::cout << "\nVilles apres tri :" << std::endl;
    afficherVilles(villes);

    std::string nom;
    std::cout << "\nEntrez le nom de la ville a rechercher : ";
    std::cin >> nom;
    rechercherVille(villes, nom);

    return 0;
}
