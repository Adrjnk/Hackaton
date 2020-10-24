#include "Logic.hpp"


Logic::Logic()  {
initUsers();
initDrivers();
initTrips();
}
void Logic::initUsers() {
    Szymon.User_Name = "Szymon";
    Szymon.home_Address ="Oławska";
    Szymon.work_Address ="Mordor";
    setUserDef(Szymon);

    Irena.User_Name = "Irena";
    Irena.home_Address ="Nożownicza";
    Irena.work_Address ="Szewska";
    setUserDef(Irena);

    Michał.User_Name = "Michał";
    Michał.home_Address ="Wyspiańskiego";
    Michał.home_Address ="Kaszubska";
    setUserDef(Michał);
}

void Logic::initDrivers() {
    Paweł.Driver_Name = "Paweł";
    Paweł.car = "Passat";
    Paweł.home_Address ="Oławska";
    Paweł.home_Address ="Mordor";
    setDriverDef(Paweł);

    Paulina.Driver_Name = "Paulina";
    Paulina.car = "Golf";
    Paulina.home_Address ="Wyspiańskiego";
    Paulina.home_Address ="Kaszubska";
    setDriverDef(Paulina);

    Maciek.Driver_Name = "Maciek";
    Maciek.car = "Skoda";
    Maciek.home_Address ="Nożownicza";
    Maciek.work_Address ="Szewska";
    setDriverDef(Maciek);
}

void Logic::initTrips() {
    jeden.to ="Oławska";
    jeden.from = "Mordor";
    setTripDef(jeden);

    dwa.from = "Wyspańskiego";
    dwa.to = "Kaszubska";
    setTripDef(dwa);

    trzy.from = "Nożownicza";
    trzy.to = "Szewska";
    setTripDef(trzy);
}

void Logic::setUserDef(User& user) {
    user.navX = rand() %1500 + 10;
    user.Score = rand() %10 + 10;
    user.navY = rand() %1500 + 10;
}

void Logic::setDriverDef(Driver& user) {
    user.navX = rand() %1500 + 10;
    user.Score = rand() %10 + 10;
    user.navY = rand() %1500 + 10;
}

void Logic::setTripDef(Trip& trip) {
    trip.distance = rand() %15 + 1;
    trip.count = rand() %3 + 1;
}

Logic::~Logic() {}




