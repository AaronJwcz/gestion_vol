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
    Passager *p;
    admin = new Administrateur("admin", "admin");
    p = new Passager();
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
        cout<<"1 -- Rechercher Un Vol\n";
        cout<<"2 -- Rechercher Une Reservation\n";
        cout<<"3 -- Ajouter Un Vol\n";
        cout<<"4 -- Modifier La Date d'Un Vol\n";
        cout<<"5 -- Modifier l'Heure d'Un Vol\n";
        cout<<"6 -- Afficher La Liste Des Vols\n";
        cout<<"7 -- Afficher La Liste Des Passagers d'Un Vol\n";
        cout<<"8 -- Quitter Et Sauvegarder\n";
        cout<<"9 -- Quitter Sans Sauvegarder\n";
        cin>>reponse;
        switch(reponse)
        {
            case '1':
                break;
            case '2':
                break;
            case '3':
                admin->ajouterVol();
                break;
            case '4':
                admin->modifierDateVol();
                break;
            case '5':
                admin->modifierHeureVol();
                break;
            case '6':
                admin->afficherVols();
                break;
            case '7':
                admin->afficherPassagersParVol();
                break;
            case '8':
                break;
            case '9':
                exit(0);
                break;
        }
    }
    else
    {
        cout<<"------Choix------\n";
        cout<<"1 -- Rechercher Un Vol\n";
        cout<<"2 -- Rechercher Une Reservation\n";
        cout<<"3 -- Afficher La Liste Des Vols\n";
        cout<<"4 -- Reserver Un Vol\n";
        cout<<"5 -- Confirmer Une Reservation";
        cout<<"6 -- Annuler Une Reservation";
        cout<<"7 -- Quitter Et Sauvegarder\n";
        cout<<"8 -- Quitter Sans Sauvegarder\n";
        switch(reponse)
        {
            case '1':
                break;
            case '2':
                break;
            case '3':
                p->afficherVols();
                break;
            case '4':
                p->reserverVol();
                break;
            case '5':
                p->confirmerReservation();
                break;
            case '6':
                p->annulerReservation();
                break;
            case '7':
                break;
            case '8':
                exit(0);
                break;
    }
}
