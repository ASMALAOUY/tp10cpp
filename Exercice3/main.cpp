#include <iostream>

using namespace std;
class Livre{
private:
    string titre;
    double prix;
public :
    void saisir(){
     cout <<"Titre du livre : " ;
     cin.ignore();
        getline(cin, titre);
     cout <<"Prix de livre: ";
     cin >>prix;


    }
    void affiche(){
        cout <<"Titre du livre : " <<titre <<"  Prix de livre: "<<prix<<endl;


    }



};

int main()
{
    int n;
    cout <<"combient de livre voulez-vous creer?"<<endl;
    cin >>n;


    Livre* livres = new Livre[n];

     for(int i=0 ;i<n ;i++){
        cout <<" livre "<< i+1 <<endl;
        livres[i].saisir();


     }
     cout <<"liste des livres saisis"<<endl;
      for (int i=0;i<n;i++){
        livres[i].affiche();

      }


    return 0;
}
