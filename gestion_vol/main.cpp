#include <iostream>
#include <string>
#include "Administrateur.h"
#include "Date.h"
#include "Destination.h"
#include "Passager.h"
#include "Reservation.h"
#include "Vol.h"

using namespace std;

int main()
{
    char reponse;
    string mdp;
    bool isAdmin;
    Administrateur *admin;
    admin = new Administrateur("admin", "admin");
    cout<<"Etes-vous admin ? (y/n) : ";
    cin>>reponse;
    if(reponse == 'y')
    {
        isAdmin = admin->connecter();
        cout<<"Connexion reussie\n";
    }
    else
    {
        isAdmin = false;
    }
    if(isAdmin)
    {
        cout<<"------Choix------\n";
        cout<<"1 -- Modifier Date d'Un Vol\n";
        cout<<"2 -- Modifier Heure d'Un Vol\n";
        cout<<"3 -- Ajouter Vol\n";
        cout<<"4 -- Afficher Liste Des Vols\n";
        cout<<"5 -- Quitter Et Sauvegarder\n";
        cout<<"6 -- Quitter Sans Sauvegarder\n";
    }
}
