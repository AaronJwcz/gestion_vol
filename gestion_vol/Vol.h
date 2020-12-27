#ifndef VOL_H_INCLUDED
#define VOL_H_INCLUDED

#include <string.h>
#include "Destination.h"
#include "Date.h"

class Vol
{
    private:
        int numVol;
        int nbPlaceMax;
        Destination destination;
        Date date;
        std::string prix;
};

#endif // VOL_H_INCLUDED
