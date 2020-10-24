#include "LogicSFML.hpp"

LogicSFML::LogicSFML(MainScreen &mainScreen, ChooseScreen &chooseScreen,
                     TripScreen &tripScreen,UserScreen &userScreen,DriverFound& driverFound)
                     :mainScreen(mainScreen),chooseScreen(chooseScreen),tripScreen(tripScreen)
                     ,userScreen(userScreen),driverFound(driverFound)

                     {}

void LogicSFML::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    //target.draw(mainScreen,states);
    //target.draw(chooseScreen,states);
    //target.draw(tripScreen,states);
    //target.draw(userScreen,states);
    target.draw(driverFound,states);

}
void LogicSFML::handleEvent(sf::Event &event, sf::RenderWindow &win) {

    //mainScreen.handleEvent(event,win);
    //chooseScreen.handleEvent(event,win);
    //tripScreen.handleEvent(event,win);
    //userScreen.handleEvent(event,win);
    driverFound.handleEvent(event,win);

}
void LogicSFML::update(){


}


LogicSFML::~LogicSFML() noexcept {}






