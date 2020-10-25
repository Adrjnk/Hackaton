//
// Created by Gus on 25.10.2020.
//

#ifndef DRIVEE_USERFOUND_HPP
#define DRIVEE_USERFOUND_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"


class UserFound {
public:
    UserFound();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    std::string options;
    ~UserFound();
private:
    sf::Sprite background;
    sf::Sprite takeOffButton;
    sf::Sprite cancelButton;
    sf::Text textPawel;
    Resources resources;
};


#endif //DRIVEE_USERFOUND_HPP
