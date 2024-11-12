#include <iostream>

using namespace std;
//pour le tableau statique:creer et remlpir le tableau
void remplirTS(int tableau[],int taille){
    cout << "Entrer les valeurs du tableau statique :"<<endl;
    for (int i=0; i<taille;i++){
        cin>>tableau[i];
    }
}
//pour le tableau dynamique:
int* remplirTD(int taille){
    int* tableau=new int [taille];
    cout<<"Entrer les valeurs du tableau dynamique :"<<endl;
    for (int i=0;i<taille;i++){
        cin>>tableau[i];
    }
    return tableau;
}
int compterPositifs(const int tableau[],int taille){
    int compteur=0;
    for (int i=0;i<taille;i++){
        if(tableau[i]>0){
            compteur++;
        }
    }
    return compteur;
}
int main()
{
    int taille;
    cout << "Entrer la taille du tableau:";
    cin >>taille;
    //Allocation statique:
    int tableauS[100];
    if (taille<=100){
        remplirTS(tableauS,taille);
        cout << "nombre de valeurs positifs :" <<compterPositifs(tableauS,taille) <<endl;
    }
    else{
        cout << "Taille trop grande pour un tableau " << endl;
    }
    //Allocation dynamique:
    int*tableauD=remplirTD(taille);
    cout << "nombre de valeurs positifs :" <<compterPositifs(tableauD,taille) <<endl;
    delete[]tableauD;
    return 0;
}
