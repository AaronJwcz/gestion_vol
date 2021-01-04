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
        int getNumReservation();
        int getNumPasseport();
        int getNumVol();
        bool getConfirmation();
        void setNumReservation(int);
        void setNumPasseport(int);
        void setNumVol(int);
        void setConfirmation(bool);
};

#endif // RESERVATION_H_INCLUDED
