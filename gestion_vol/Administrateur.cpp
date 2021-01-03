#include <string>
#include <iostream>
#include "Administrateur.h"
#include "Vol.h"
#include "Passager.h"
#include "Reservation.h"
#include "Destination.h"

using namespace std;

Administrateur::Administrateur(string i, string m) : id(i), mdp(m)
{

}

void Administrateur::connecter()
{
    string i, m;
    cout<<"Identifiant : "<<endl;
    cin>>i>>endl;
    if(i != this.id)
    {
        cout<<"Identifiant non connu."<<endl;
        exit(1);
    }
    cout<<"Mot de passe : "<<endl;
    cin>>m>>endl;
    if(m != this.mdp)
    {
        cout>>"Mot de passe incorrect."<<endl;
        exit(1);
    }


}

Vol Administrateur::ajouterVol()
{
    int nv, nbpm;
    string p;
    Destination* de;
    Date *da;

    cout<<"Insérez le numéro de vol :"<<endl;
    cin>>nv>>endl;
    cout<<"Insérez le nombre de places max :"<<endl;
    cin>>nbpm>>endl;
    cout<<"Créer une destination"<<endl;
    de = ajouterDestination();
    cout<<"Créer une date"<<endl;
    da = new Date();
    cin>>da.date>>endl;
    cin>>da.heure>>endl;
    cout<<"Insérez le prix :"<<endl;
    cin>>p>>endl;
    return new Vol(nv, nbpm, *de, *da, p);
}
Passager Administrateur::ajouterPassager()
{
   string n, p, tn;
   int a, np;
   titre t;
   cout<<"Entrez le nom :"<<endl;
   cin>>n>>endl;
   cout<<"Entrez le prénom :"<<endl;
   cin>>p>>endl;
   cout<<"Entrez l'age :"<<endl;
   cin>>a>>endl;
   cout<<"Choisissez le titre (M., Mme, Mlle) :"<<endl;
   cin>>tn>>endl;
   switch(tn)
   {
        case "Mme":
            t = Mme;
            break;
        case "M.":
            t = M;
            break;
        case "Mlle":
            t = Mlle;
            break;
        default:
            cout<<"Titre non accepté"<<endl;
            exit(1);
   }
   cout<<"Entrez le numero de passeport :"<<endl
   cin>>np>>endl;
   return new Passager(n,p,a,t,np);
}
Reservation Administrateur::ajouterReservation()
{

}
Destination Administrateur::ajouterDestination()
{

}
void Administrateur::modifierHeureVol()
{

}
void Administrateur::modifierDateVol()
{

}
void Administrateur::afficherVols()
{

}
bool Administrateur::isVol()
{

}
void Administrateur::afficherPassagersParVol()
{

}
