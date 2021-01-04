#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <string>

class Date
{
    private:
        std::string date;
        std::string heure;

    public:
        Date(std::string, std::string);
        std::string getDate();
        std::string getHeure();
        void setDate(std::string);
        void setHeure(std::string);
};

#endif // DATE_H_INCLUDED
