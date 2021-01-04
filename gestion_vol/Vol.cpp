#include <string>
#include "Destination.h"
#include "Date.h"
#include "Vol.h"

using namespace std;

Vol::Vol(int nV, int nbPM, Destination *de, Date *da, string p) : numVol(nV), nbPlaceMax(nbPM), destination(de), date(da), prix(p)
{

}
Vol::~Vol()
{
    delete destination;
    delete date;
}
int Vol::getNumVol()
{
    return this->numVol;
}
int Vol::getNbPlaceMax()
{
    return this->nbPlaceMax;
}
Destination* Vol::getDestination()
{
    return this->destination;
}
Date* Vol::getDate()
{
    return this->date;
}
string Vol::getPrix()
{
    return this->prix;
}
void Vol::setNumVol(int nV)
{
    this->numVol = nV;
}
void Vol::setNbPlaceMax(int nbpm)
{
    this->nbPlaceMax = nbpm;
}
void Vol::setDestination(Destination* de)
{
    this->destination = de;
}
void Vol::setDate(Date* da)
{
    this->date = da;
}
void Vol::setPrix(string p)
{
    this->prix = p;
}
