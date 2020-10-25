#ifndef DRIVEE_USERFOUND_HPP
#define DRIVEE_USERFOUND_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"


class UserFound :public sf::Drawable {
public:
    UserFound();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win,sf::Vector2<float> &translated_pos);
    std::string options;
    ~UserFound();
private:
    sf::Sprite background;
    sf::Sprite takeOffButton;
    sf::Sprite cancelButton;
    sf::Text textPawel;
    Resources resources;
};


#endif
