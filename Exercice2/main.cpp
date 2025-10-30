#include <iostream>

using namespace std;
class Personne {
  private:
      string nom;
      int age;
  public :
    Personne(string nom,int age){
      this->age=age;
      this->nom=nom;

    }
    void affiche(){

      cout <<"Nom :" <<nom <<",Age : " <<age <<" ans " <<endl;
    }

};

int main()
{
    Personne* personne = new Personne("Asma",21);
    personne->affiche();
    delete personne;
    personne=nullptr;
    return 0 ;
}
