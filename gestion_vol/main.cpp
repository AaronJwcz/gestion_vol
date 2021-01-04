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
        cout<<"2 -- Ajouter Un Vol\n";
        cout<<"3 -- Modifier La Date d'Un Vol\n";
        cout<<"4 -- Modifier l'Heure d'Un Vol\n";
        cout<<"5 -- Afficher La Liste Des Vols\n";
        cout<<"6 -- Afficher La Liste Des Passagers d'Un Vol\n";
        cout<<"7 -- Quitter Et Sauvegarder\n";
        cout<<"8 -- Quitter Sans Sauvegarder\n";
        cin>>reponse;
        switch(reponse)
        {
            case '1':
                int nV;
                cout<<"Quel vol voulez-vous rechercher ?";
                cin>>nV;
                admin->isVol(nV);
                break;
            case '2':
                admin->ajouterVol();
                break;
            case '3':
                Vol* v1;
                //proposer la liste des vols sous forme de numéros
                admin->modifierDateVol(v1);
                break;
            case '4':
                Vol* v2;
                //proposer la liste des vols sous forme de numéros
                admin->modifierHeureVol(v2);
                break;
            case '5':
                admin->afficherVols();
                break;
            case '6':
                admin->afficherPassagersParVol();
                break;
            case '7':
                //sauvegarde dans les fichiers correspondants
                break;
            case '8':
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
        cout<<"5 -- Confirmer Une Reservation\n";
        cout<<"6 -- Annuler Une Reservation\n";
        cout<<"7 -- Quitter Et Sauvegarder\n";
        cout<<"8 -- Quitter Sans Sauvegarder\n";
        switch(reponse)
        {
            case '1':
                int nV;
                cout<<"Quel vol voulez-vous rechercher ?";
                cin>>nV;
                p->isVol(nV);
                break;
            case '2':
                int nR;
                cout<<"Quel reservation voulez-vous rechercher ?";
                cin>>nR;
                p->isReservation(nR);
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
                //sauvegarde dans les fichiers correspondants
                break;
            case '8':
                exit(0);
                break;
        }
    }
}
