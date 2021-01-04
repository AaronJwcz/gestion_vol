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
    Administrateur admin = new Admin("admin", "admin");
    cout<<"Etes-vous admin ? (y/n) : ";
    cin>>reponse;
    if(reponse == 'y')
    {
        cout<<"Tapez le mot de passe administrateur : ";
        cin>>mdp;
        if(mdp == admin.mdp)
        {
           isAdmin = true;
        }
        else
        {
            cout<<"Mot de passe incorrect, session user active.\n";
            isAdmin = false
        }
    }
    else
    {
        isAdmin = false;
    }
    if(isAdmin)
    {

    }
}
