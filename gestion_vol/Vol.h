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
        Vol();
        Vol(int, int, Destination*, Date*, std::string);
        ~Vol();
};

#endif // VOL_H_INCLUDED
