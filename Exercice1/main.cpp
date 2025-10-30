#include <iostream>

using namespace std;

int main()
{
    int taille;

    cout << "Entrez la taille du tableau :" << endl;
    cin >>taille;
    if (taille<=0){
        cout<<"Taille invalide!"<<endl;
        return 1;
    }
    int* tableau = new int[taille];

    cout << "Entrer les  "<< taille <<" entiers :" <<endl;


     for(int i=0 ;i<taille;i++){
            cout <<"Element " <<i+1<< " : " ;
             cin >>tableau[i];

     }

      cout <<"contenu du tableau :" <<endl;
      for(int i=0 ;i<taille ;i++){
        cout <<tableau[i]<<" ";

      }
      cout <<endl;
    delete[] tableau;
    tableau = nullptr;





    return 0;
}
