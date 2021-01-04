#include <string>
#include "Reservation.h"
#include "Passager.h"

using namespace std;

Passager::Passager()
{

}
Passager::Passager(string n, string p, int a, titre t, int nP) : nom(n), prenom(p), age(a), sonTitre(t), numPasseport(nP)
{

}
string Passager::getNom()
{
    return this->nom;
}
string Passager::getPrenom()
{
    return this->prenom;
}
int Passager::getAge()
{
    return this->age;
}
titre Passager::getTitre()
{
    return this->sonTitre;
}
int Passager::getNumPasseport()
{
    return this->numPasseport;
}
void Passager::setNom(string n)
{
    this->nom = n;
}
void Passager::setPrenom(string p)
{
    this->prenom = p;
}
void Passager::setAge(int a)
{
    this->age = a;
}
void Passager::setTitre(titre t)
{
    this->sonTitre = t;
}
void Passager::setNumPasseport(int np)
{
    this->numPasseport = np;
}
Reservation Passager::reserverVol()
{
    //Pas compris
}
void Passager::confirmerReservation()
{

}
void Passager::annulerReservation()
{

}
void Passager::afficherVols()
{

}
bool Passager::isVol(int nV)
{
    //recherche d'un vol via le numéro de vol
}
bool Passager::isReservation(int nR)
{
    //recherche d'une réservation via le numéro de réservation
}
