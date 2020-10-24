#include "Logic.hpp"


Logic::Logic()  {

 Szymonn.User_Name = "Szymon";
 setUserDef(Szymonn);

 Irena.User_Name = "Irenka";
 setUserDef(Irena);

 Michu.User_Name = "Michał";
 setUserDef(Michu);



 Szymob.Driver_Name = "Szybki i wściekły";
 Szymob.car = "Dniepr";
 setDriverDef(Szymob);

 Ireeenka.Driver_Name = "Irenka";
 Ireeenka.car = "Golfik";
 setDriverDef(Ireeenka);

 Garzewawiak.Driver_Name = "Kuba";
 Garzewawiak.car = "Amfibia";
 setDriverDef(Garzewawiak);

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

void Logic::setUserDef(User user) {
    user.navX = rand() %1500 + 10;
    user.Score = rand() %1500 + 10;
    user.navY = rand() %1500 + 10;
}

void Logic::setDriverDef(Driver user) {
    user.navX = rand() %1500 + 10;
    user.Score = rand() %1500 + 10;
    user.navY = rand() %1500 + 10;
}

void Logic::setTripDef(Trip trip) {
    trip.distance = rand() %1 + 10;
    trip.count = rand() %3+1;


}



