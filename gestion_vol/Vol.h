#ifndef VOL_H_INCLUDED
#define VOL_H_INCLUDED

#include <string>
#include "Destination.h"
#include "Date.h"

class Vol
{
    private:
        int numVol;
        int nbPlaceMax;
        Destination *destination;
        Date *date;
        std::string prix;

    public:
        Vol(int, int, Destination*, Date*, std::string);
        ~Vol();
        int getNumVol();
        int getNbPlaceMax();
        Destination* getDestination();
        Date* getDate();
        std::string getPrix();
        void setNumVol(int);
        void setNbPlaceMax(int);
        void setDestination(Destination*);
        void setDate(Date*);
        void setPrix(std::string);
};

#endif // VOL_H_INCLUDED
