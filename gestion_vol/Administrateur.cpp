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

string Administrateur::getID()
{
    return this->id;
}
string Administrateur::getMDP()
{
    return this->mdp;
}
void Administrateur::setID(string i)
{
    this->id = i;
}
void Administrateur::setMDP(string m)
{
    this->mdp = m;
}

bool Administrateur::connecter()
{
    string i, m;
    cout<<"Identifiant : ";
    cin>>i;
    if(i != this->id)
    {
        cout<<"Identifiant non connu.";
        return false;
    }
    cout<<"Mot de passe : ";
    cin>>m;
    if(m != this->mdp)
    {
        cout<<"Mot de passe incorrect.\n";
        return false;
    }
    return true;
}

Vol* Administrateur::ajouterVol()
{
    int nv, nbpm;
    string p, d, h;
    Destination *de;
    Date *da;

    cout<<"Insérez le numéro de vol :";
    cin>>nv;
    cout<<"Insérez le nombre de places max :";
    cin>>nbpm;
    cout<<"Créer une destination\n";
    de = ajouterDestination();
    cout<<"Créer une date\n";
    cout<<"Entrez la date :";
    cin>>d;
    cout<<"Entrez l'heure :";
    cin>>h;
    da = new Date(d,h);
    cout<<"Insérez le prix :";
    cin>>p;
    return new Vol(nv, nbpm, de, da, p);
}
Passager* Administrateur::ajouterPassager()
{
   string n, p, tn;
   int a, np;
   titre t;
   cout<<"Entrez le nom :";
   cin>>n;
   cout<<"Entrez le prénom :";
   cin>>p;
   cout<<"Entrez l'age :";
   cin>>a;
   cout<<"Choisissez le titre (M., Mme, Mlle) :";
   cin>>tn;
   if(tn == "Mme")
   {
       t = Mme;
   }
   else if(tn == "M.")
   {
       t = M;
   }
   else if (tn == "Mlle")
   {
       t = Mlle;
   }
   else
   {
       cout<<"Titre non accepté\n";
       exit(1);
   }
   cout<<"Entrez le numero de passeport :";
   cin>>np;
   return new Passager(n,p,a,t,np);
}
Reservation* Administrateur::ajouterReservation(Passager *p, Vol *v)
{
    int nR, np, nv;
    cout<<"Entrez le numero de reservation :";
    cin>>nR;
    np = p->getNumPasseport();
    nv = v->getNumVol();
    return new Reservation(nR, np, nv, false);
}
Destination* Administrateur::ajouterDestination()
{
    string vD, vA;
    cout<<"Entrez la ville de depart :";
    cin>>vD;
    cout<<"Entrez la ville d'arrivee :";
    cin>>vA;
    if(vD == vA)
    {
        cout<<"La ville de depart et la ville d'arrivee sont indentiques.\n";
        exit(1);
    }
    return new Destination(vD, vA);
}
void Administrateur::modifierHeureVol(Vol *v)
{
    string h;
    cout<<"Entrez la nouvelle heure :";
    cin>>h;
    v->getDate()->setHeure(h);
}
void Administrateur::modifierDateVol(Vol *v)
{
    string d;
    cout<<"Entrez la nouvelle date :";
    cin>>d;
    v->getDate()->setDate(d);
}
void Administrateur::afficherVols()
{
    //récupère la table Vol, la mettre dans un tableau et afficher
}
bool Administrateur::isVol(int nV)
{
    //recherche d'un vol via un numéro de Vol
}
void Administrateur::afficherPassagersParVol()
{
    //récupère la Table Passager, et compare qui a le même numéro de vol
}
