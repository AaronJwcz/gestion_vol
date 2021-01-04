#include <string>
#include "Date.h"

using namespace std;

Date::Date(string d, string h) : date(d), heure(h)
{

}
string Date::getDate()
{
    return this->date;
}
string Date::getHeure()
{
    return this->heure;
}
void Date::setDate(string d)
{
    this->date = d;
}
void Date::setHeure(string h)
{
    this->heure = h;
}
