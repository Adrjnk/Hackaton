#include <iostream>
#include <SFML/Graphics.hpp>
#include <LogicSFML.hpp>

int main(){
    srand( static_cast<unsigned int>(time(nullptr)));
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow win(sf::VideoMode(440, 800), "Drivee",sf::Style::Default ,settings);

    LogicSFML mainLogic;

    while (win.isOpen()) {
        sf::Event event;
        while (win.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                win.close();
            }
        }
        win.draw(mainLogic);
        win.clear();
    }
    return 0;
}
