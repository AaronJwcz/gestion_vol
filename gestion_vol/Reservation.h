#ifndef RESERVATION_H_INCLUDED
#define RESERVATION_H_INCLUDED

class Reservation
{
    private:
        int numReservation;
        int numPasseport;
        int numVol;
        bool confirmation;

    public:
        Reservation(int, int, int, bool);
};

#endif // RESERVATION_H_INCLUDED
