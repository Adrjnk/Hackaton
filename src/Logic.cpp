#include "Logic.hpp"


Logic::Logic()  {
initUsers();
initDrivers();
initTrips();
}
void Logic::initUsers() {
    Szymon.User_Name = "Szymon";
    setUserDef(Szymon);

    Irena.User_Name = "Irena";
    setUserDef(Irena);

    Michał.User_Name = "Michał";
    setUserDef(Michał);
}

void Logic::initDrivers() {
    Paweł.Driver_Name = "Paweł";
    Paweł.car = "Passat";
    setDriverDef(Paweł);

    Paulina.Driver_Name = "Paulina";
    Paulina.car = "Golf";
    setDriverDef(Paulina);

    Maciek.Driver_Name = "Kuba";
    Maciek.car = "Skoda";
    setDriverDef(Maciek);
}

void Logic::initTrips() {
    jeden.to ="Jana Pawła II";
    jeden.from = "Plac Grunwaldzki";
    setTripDef(jeden);

    dwa.from = "Traugutta";
    dwa.to = "Oławska";
    setTripDef(dwa);

    trzy.from = "Małopolna";
    trzy.to = "Kwiatowa";
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




