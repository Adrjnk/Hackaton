#ifndef DRIVEE_LOGICSFML_HPP
#define DRIVEE_LOGICSFML_HPP

#include "SFML/Graphics.hpp"
#include "MainScreen.hpp"
#include "TripScreen.hpp"
#include "UserScreen.hpp"
#include "ChooseScreen.hpp"

class LogicSFML: public sf::Drawable{
public:
    LogicSFML(MainScreen& mainScreen,ChooseScreen& chooseScreen,TripScreen& tripScreen,UserScreen& userScreen);
    void update();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    ~LogicSFML();
private:
    MainScreen& mainScreen;
    ChooseScreen& chooseScreen;
    TripScreen& tripScreen;
    UserScreen& userScreen;

};


#endif
