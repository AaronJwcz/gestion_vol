#ifndef ADMINISTRATEUR_H_INCLUDED
#define ADMINISTRATEUR_H_INCLUDED

#include <string>
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
        Administrateur(std::string, std::string);
        void connecter();
        Vol* ajouterVol();
        Passager* ajouterPassager();
        Reservation* ajouterReservation(Passager*, Vol*);
        Destination* ajouterDestination();
        void modifierHeureVol(Vol*);
        void modifierDateVol(Vol*);
        void afficherVols();
        bool isVol();
        void afficherPassagersParVol();
};

#endif // ADMINISTRATEUR_H_INCLUDED
