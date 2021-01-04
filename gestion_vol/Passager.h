#ifndef PASSAGER_H_INCLUDED
#define PASSAGER_H_INCLUDED

#include <string>
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
        Passager();
        Passager(std::string, std::string, int, titre, int);
        std::string getNom();
        std::string getPrenom();
        int getAge();
        titre getTitre();
        int getNumPasseport();
        void setNom(std::string);
        void setPrenom(std::string);
        void setAge(int);
        void setTitre(titre);
        void setNumPasseport(int);
        Reservation reserverVol();
        void confirmerReservation();
        void annulerReservation();
        void afficherVols();
        bool isVol(int);
        bool isReservation(int);
};

#endif // PASSAGER_H_INCLUDED
