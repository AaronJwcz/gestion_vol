#include <string>
#include "Destination.h"
#include "Date.h"
#include "Vol.h"

using namespace std;

Vol::Vol()
{

}
Vol::Vol(int nV, int nbPM, Destination *de, Date *da, string p) : numVol(nV), nbPlaceMax(nbPM), destination(de), date(da), prix(p)
{

}
Vol::~Vol()
{
    delete destination;
    delete date;
}
