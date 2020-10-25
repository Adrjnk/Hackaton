#ifndef DRIVEE_LOGIC_HPP
#define DRIVEE_LOGIC_HPP
#include "User.hpp"
#include "Trip.hpp"
#include "Driver.hpp"

class Logic {
public:
    Logic();
~Logic();

private:
    void initUsers();
    void initDrivers();
    void initTrips();
    void setUserDef(User &user);
    void setDriverDef(Driver &driver);
    void setTripDef(Trip &trip);

    User Szymon;
    User Irena;
    User Michal;

    Driver Pawel;
    Driver Paulina;
    Driver Maciek;

    Trip jeden;
    Trip dwa;
    Trip trzy;
};


#endif
