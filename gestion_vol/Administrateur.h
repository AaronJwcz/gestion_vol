#ifndef ADMINISTRATEUR_H_INCLUDED
#define ADMINISTRATEUR_H_INCLUDED

#include <string.h>
#include "Vol.h"
#include "Passager.h"
#include "Reservation.h"
#include "Destination.h"

class Administrateur
{
    private:
        std::string id;
        std::string mdp;

    public:
        void connecter();
        Vol ajouterVol();
        Passager ajouterPassager();
        Reservation ajouterReservation();
        Destination ajouterDestination();
        void modifierHeureVol();
        void modifierDateVol();
        void afficherVols();
        bool isVol();
        void afficherPassagersParVol();
};

#endif // ADMINISTRATEUR_H_INCLUDED
