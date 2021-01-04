#include "Reservation.h"

Reservation::Reservation(int nR, int nP, int nV, bool c) : numReservation(nR), numPasseport(nP), numVol(nV), confirmation(c)
{

}
int Reservation::getNumReservation()
{
    return this->numReservation;
}
int Reservation::getNumPasseport()
{
    return this->numPasseport;
}
int Reservation::getNumVol()
{
    return this->numVol;
}
bool Reservation::getConfirmation()
{
    return this->confirmation;
}
void Reservation::setNumReservation(int nR)
{
    this->numReservation = nR;
}
void Reservation::setNumPasseport(int nP)
{
    this->numPasseport = nP;
}
void Reservation::setNumVol(int nV)
{
    this->numVol = nV;
}
void Reservation::setConfirmation(bool c)
{
    this->confirmation = c;
}
