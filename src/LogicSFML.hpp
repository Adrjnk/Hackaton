#ifndef DRIVEE_LOGICSFML_HPP
#define DRIVEE_LOGICSFML_HPP

#include "SFML/Graphics.hpp"
#include "Logic.hpp"
#include "MainScreen.hpp"
#include "TripScreen.hpp"
#include "UserScreen.hpp"
#include "DriverFound.hpp"
#include "Loading.hpp"

class LogicSFML: public sf::Drawable{
public:
    LogicSFML(MainScreen& mainScreen,TripScreen& tripScreen,UserScreen& userScreen
              ,DriverFound& driverFound,Loading& loading);
    void update();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    ~LogicSFML();
private:
    int bolt=0;
    MainScreen& mainScreen;
    TripScreen& tripScreen;
    UserScreen& userScreen;
    DriverFound& driverFound;
    Loading& loading;
    std::string mainOptions="mainScreen";
};


#endif
