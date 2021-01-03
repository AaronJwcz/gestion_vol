#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <string>

class Date
{
    private:
        std::string date;
        std::string heure;

    public:
        Date();
        Date(std::string, std::string);
};

#endif // DATE_H_INCLUDED
