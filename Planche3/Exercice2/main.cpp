#include <iostream>
#include <array>
using namespace std;
const int tailleM=100;
void remplir (array<int,tailleM> &tableau,int taille){
    cout << "Entrez les valeurs du tableau :" << endl;
    for (int i = 0; i < taille; i++) {
        cin >> tableau[i];
    }
}
void recherche (const array<int,tailleM>&tableau,int taille,int valeur){
    bool trouve =false;
    for (int i=0;i<taille;i++){
        if (tableau[i]==valeur){
            cout <<"la valeur"<<valeur<<"se trouve dans le tableau a la position "<<i<<endl;
            trouve =true;
            break;
        }
    }
    if (!trouve){
        cout << "la valeur "<< valeur <<" ne se trouve pas dans le tableau."<<endl;
    }
}

int main()
{
    int taille;
    cout << "Entrer la taille du tableau :" ;
    cin>> taille;
    array<int,tailleM>tableau;
    remplir(tableau,taille);
    int valeur;
    cout <<"Entrer la valeur a rechercher :";
    cin>>valeur;
    recherche(tableau,taille,valeur);
    return 0;
}
