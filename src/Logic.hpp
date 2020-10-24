#ifndef DRIVEE_LOGIC_HPP
#define DRIVEE_LOGIC_HPP
#include "User.hpp"
#include "Trip.hpp"
#include "Driver.hpp"

class Logic {
    Logic();
void setUserDef(User);
void setDriverDef(Driver);
void setTripDef(Trip);

private:
    User Szymonn;
    User Irena;
    User Michu;

    Driver Szymob;
    Driver Ireeenka;
    Driver Garzewawiak;

    Trip jeden;
    Trip dwa;
    Trip trzy;
};


#endif
