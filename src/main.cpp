#include <iostream>
#include <SFML/Graphics.hpp>
#include "LogicSFML.hpp"

int main(){
    srand( static_cast<unsigned int>(time(nullptr)));
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow win(sf::VideoMode(440, 800), "Drivee",sf::Style::Default ,settings);

    MainScreen mainScreen;
    ChooseScreen chooseScreen;
    TripScreen tripScreen;
    UserScreen userScreen;

    LogicSFML mainLogic(mainScreen,chooseScreen,tripScreen,userScreen);

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
        win.clear();
    }
    return 0;
}
