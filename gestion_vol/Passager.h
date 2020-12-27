#ifndef PASSAGER_H_INCLUDED
#define PASSAGER_H_INCLUDED

#include <string.h>
#include "Reservation.h"
typedef enum {M, Mlle, Mme} titre;

class Passager
{
    private:
        std::string nom;
        std::string prenom;
        int age;
        titre sonTitre;
        int numPasseport;

    public:
        Reservation reserverVol();
        void confirmerReservation();
        void annulerReservation();
        void afficherVols();
        bool isVol();
        bool isReservation();
};

#endif // PASSAGER_H_INCLUDED
