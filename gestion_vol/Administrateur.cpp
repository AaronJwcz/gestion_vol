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
    cout<<"Identifiant : ";
    cin>>i;
    if(i != this->id)
    {
        cout<<"Identifiant non connu.";
        exit(1);
    }
    cout<<"Mot de passe : ";
    cin>>m;
    if(m != this->mdp)
    {
        cout<<"Mot de passe incorrect.\n";
        exit(1);
    }


}

Vol* Administrateur::ajouterVol()
{
    int nv, nbpm;
    string p, d, h;
    Destination *de;
    Date *da;

    cout<<"Ins�rez le num�ro de vol :";
    cin>>nv;
    cout<<"Ins�rez le nombre de places max :";
    cin>>nbpm;
    cout<<"Cr�er une destination\n";
    de = ajouterDestination();
    cout<<"Cr�er une date\n";
    cout<<"Entrez la date :";
    cin>>d;
    cout<<"Entrez l'heure :";
    cin>>h;
    da = new Date(d,h);
    cout<<"Ins�rez le prix :";
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
   cout<<"Entrez le pr�nom :";
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
       cout<<"Titre non accept�\n";
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
    np = p->numPasseport;
    nv = v->numVol;
    return new Reservation(nR, nP, nV, false);
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
    v->date->heure = h;
}
void Administrateur::modifierDateVol(Vol *v)
{
    string d;
    cout<<"Entrez la nouvelle date :";
    cin>>d;
    v->date->date = d;
}
void Administrateur::afficherVols()
{
    //� faire avec la bd
}
bool Administrateur::isVol()
{
    //� faire avec la bd
}
void Administrateur::afficherPassagersParVol()
{
    //� faire avec la bd
}
