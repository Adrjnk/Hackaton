#include <iostream>
#include "SFML/Graphics.hpp"
#include "LogicSFML.hpp"

int main(){
    srand( static_cast<unsigned int>(time(nullptr)));
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow win(sf::VideoMode(440, 800), "Drivee",sf::Style::Default ,settings);

    Logic logic;

    MainScreen mainScreen;
    TripScreen tripScreen;
    UserScreen userScreen;
    DriverFound driverFound;
    UserFound userFound;
    Loading loading;

    LogicSFML mainLogic(mainScreen,tripScreen,userScreen,driverFound,userFound,loading);

    while (win.isOpen()) {
        sf::Event event;
        while (win.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                win.close();
            }
            mainLogic.handleEvent(event,win);
        }
        mainLogic.update();
        win.draw(mainLogic);
        win.display();
        win.clear(sf::Color::White);
    }
    return 0;
}
