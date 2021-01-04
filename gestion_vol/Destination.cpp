#include <string>
#include "Destination.h"

using namespace std;

Destination::Destination(string vD, string vA) : villeDepart(vD), villeArrivee(vA)
{

}
string Destination::getVilleDepart()
{
    return this->villeDepart;
}
string Destination::getVilleArrivee()
{
    return this->villeArrivee;
}
void Destination::setVilleDepart(string vD)
{
    this->villeDepart = vD;
}
void Destination::setVilleArrivee(string vA)
{
    this->villeArrivee = vA;
}
