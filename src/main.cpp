#include <iostream>
#include <SFML/Graphics.hpp>

int main(){
    srand( static_cast<unsigned int>(time(nullptr)));
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow win(sf::VideoMode(600, 1000), "Drivee",sf::Style::Default ,settings);

    while (win.isOpen()) {
        sf::Event event;
        while (win.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                win.close();
            }
        }
        win.display();
        win.clear();
    }
    return 0;
}
