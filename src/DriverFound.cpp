#include "DriverFound.hpp"

DriverFound::DriverFound() {
background.setTexture(resources.textureCarsBackground);
background.setPosition(0,0);
takeOffButton.setTexture(resources.textureTakeOff);
takeOffButton.setPosition(15,390);
cancelButton.setTexture(resources.textureCancel);
cancelButton.setPosition(225,395);
}


void DriverFound::draw(sf::RenderTarget &target, sf::RenderStates states) const {
target.draw(background);
target.draw(takeOffButton);
target.draw(cancelButton);
}

void DriverFound::handleEvent(sf::Event &event, sf::RenderWindow &win) {

}



DriverFound::~DriverFound() {

}
