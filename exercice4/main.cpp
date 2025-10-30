#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    void saisir() {
        cout << "Nom : ";
        getline(cin, nom);
        cout << "Telephone : ";
        getline(cin, telephone);
        cout << "Email : ";
        getline(cin, email);
    }

    void afficher() {
        cout << "Nom : " << nom << ", Telephone : " << telephone << ", Email : " << email << endl;
    }

    string getNom() const {
        return nom;
    }
};

void supprimerContact(Contact** contacts, int& taille, const string& nom) {
    int index = -1;
    for (int i = 0; i < taille; ++i) {
        if (contacts[i]->getNom() == nom) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Contact non trouve !" << endl;
        return;
    }

    delete contacts[index];

    for (int i = index; i < taille - 1; ++i) {
        contacts[i] = contacts[i + 1];
    }

    taille--;
    cout << "Contact supprime !" << endl;
}

int main() {
    int n;
    cout << "Combien de contacts voulez-vous creer ? ";
    cin >> n;
    cin.ignore();

    Contact** carnet = new Contact*[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nContact " << i + 1 << endl;
        carnet[i] = new Contact;
        carnet[i]->saisir();
    }

    cout << "\nListe des contacts :\n";
    for (int i = 0; i < n; ++i) {
        carnet[i]->afficher();
    }

    string nomASupprimer;
    cout << "\nNom du contact a supprimer : ";
    getline(cin, nomASupprimer);
    supprimerContact(carnet, n, nomASupprimer);

    cout << "\nListe des contacts apres suppression :\n";
    for (int i = 0; i < n; ++i) {
        carnet[i]->afficher();
    }

    for (int i = 0; i < n; ++i) {
        delete carnet[i];
    }
    delete[] carnet;

    return 0;
}
