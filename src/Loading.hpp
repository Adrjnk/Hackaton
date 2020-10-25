#ifndef DRIVEE_LOADING_HPP
#define DRIVEE_LOADING_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class Loading : public sf::Drawable{
public:
    Loading();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    std::string options="empty";
    ~Loading();
private:
    void initTexture();
    void initText();
    sf::Text loading;
    sf::Sprite backGround;
    Resources resources;
};


#endif
