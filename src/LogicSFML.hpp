#ifndef DRIVEE_LOGICSFML_HPP
#define DRIVEE_LOGICSFML_HPP

#include "SFML/Graphics.hpp"
#include "Logic.hpp"
#include "MainScreen.hpp"
#include "TripScreen.hpp"
#include "UserScreen.hpp"
#include "DriverFound.hpp"
#include "UserFound.hpp"
#include "Loading.hpp"

class LogicSFML: public sf::Drawable{
public:
    LogicSFML(MainScreen& mainScreen,TripScreen& tripScreen,UserScreen& userScreen
              ,DriverFound& driverFound,UserFound &userFound,Loading& loading);
    void update();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    ~LogicSFML();
private:
    int bolt=0;
    std::string driverOrPassenger="empty";
    MainScreen& mainScreen;
    TripScreen& tripScreen;
    UserScreen& userScreen;
    UserFound& userFound;
    DriverFound& driverFound;
    Loading& loading;
    std::string mainOptions="mainScreen";
};


#endif
