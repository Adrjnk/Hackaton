#ifndef DRIVEE_LOADING_HPP
#define DRIVEE_LOADING_HPP

#include "SFML/Graphics.hpp"

class Loading : public sf::Drawable{
public:
    Loading();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    ~Loading();
private:
};


#endif
