#include "LogicSFML.hpp"

LogicSFML::LogicSFML(MainScreen &mainScreen,TripScreen &tripScreen,UserScreen &userScreen,
                     DriverFound& driverFound,UserFound &userFound,Loading& loading)
                     :mainScreen(mainScreen),tripScreen(tripScreen)
                     ,userScreen(userScreen),userFound(userFound),driverFound(driverFound),loading(loading)

                     {}

void LogicSFML::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    if(mainOptions=="mainScreen")
    target.draw(mainScreen,states);
    else if(mainOptions=="tripScreen")
    target.draw(tripScreen,states);
    else if(mainOptions=="userScreen")
    target.draw(userScreen,states);
    else if(mainOptions=="driverFound")
        target.draw(driverFound, states);
    else if(mainOptions=="userFound")
        target.draw(userFound, states);
    else if(mainOptions=="loading")
        target.draw(loading, states);
    if(bolt==8){
        sf::sleep(sf::seconds(3));
    }
}
void LogicSFML::handleEvent(sf::Event &event, sf::RenderWindow &win) {

    auto mouse_pos = sf::Mouse::getPosition(win);
    auto translated_pos = win.mapPixelToCoords(mouse_pos);

    if(mainOptions=="mainScreen")
    mainScreen.handleEvent(event,win,translated_pos);
    else if(mainOptions=="tripScreen")
    tripScreen.handleEvent(event,win);
    else if(mainOptions=="userScreen")
    userScreen.handleEvent(event,win,translated_pos);
    else if(mainOptions=="driverFound")
    driverFound.handleEvent(event,win,translated_pos);
    else if(mainOptions=="userFound")
        userFound.handleEvent(event,win,translated_pos);

}
void LogicSFML::update(){

    if(mainScreen.options=="Drive"){
        mainScreen.options="empty";
        driverOrPassenger="driver";
        mainOptions="tripScreen";
    }

    else if(mainScreen.options=="Passenger"){
        mainScreen.options="empty";
        mainOptions="tripScreen";
        driverOrPassenger="passenger";
    }
    else if(mainScreen.options=="User"){
        mainScreen.options="empty";
        mainOptions="userScreen";
    }

    if(tripScreen.options=="runSearch"){
        mainOptions="loading";
        tripScreen.options="empty";
        loading.options="found";
        tripScreen.screenReset();
    }

    if(loading.options=="found"){
        bolt++;
        if(bolt>8) {
            loading.options = "empty";
            if(driverOrPassenger=="passenger")
            mainOptions = "driverFound";
            if(driverOrPassenger=="driver")
                mainOptions = "userFound";
            bolt=0;
        }
    }

    if(userScreen.options=="powrót"){
        userScreen.options="empty";
        mainOptions="mainScreen";
    }

    else if(driverFound.options=="powrót"){
        driverFound.options="empty";
        mainOptions="mainScreen";
    }

    else if(userFound.options=="powrót"){
        userFound.options="empty";
        mainOptions="mainScreen";
    }

}

LogicSFML::~LogicSFML() noexcept {}






