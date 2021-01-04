#ifndef DESTINATION_H_INCLUDED
#define DESTINATION_H_INCLUDED

#include <string>

class Destination
{
    private:
        std::string villeDepart;
        std::string villeArrivee;

    public:
        Destination(std::string, std::string);
        std::string getVilleDepart();
        std::string getVilleArrivee();
        void setVilleDepart(std::string);
        void setVilleArrivee(std::string);
};

#endif // DESTINATION_H_INCLUDED
