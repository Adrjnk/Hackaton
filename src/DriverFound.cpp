#include "DriverFound.hpp"

DriverFound::DriverFound() {
background.setTexture(resources.textureCarsBackground);
background.setPosition(0,0);
takeOffButton.setTexture(resources.textureTakeOff);
takeOffButton.setPosition(15,390);
cancelButton.setTexture(resources.textureCancel);
cancelButton.setPosition(225,390);
textPawel.setFont(resources.font);
textPawel.setPosition(60,55);
textPawel.setCharacterSize(35);
textPawel.setString(L"Paweł znajduje się \n 200m od Ciebie i \n kończy podróż w \n pobliżu Twojej \n docelowej lokalizacji.");
textPawel.setFillColor(sf::Color(0,0,0));
}


void DriverFound::draw(sf::RenderTarget &target, sf::RenderStates states) const {
target.draw(background);
target.draw(takeOffButton);
target.draw(cancelButton);
target.draw(textPawel);
}

void DriverFound::handleEvent(sf::Event &event, sf::RenderWindow &win,sf::Vector2<float> &translated_pos) {

    if(takeOffButton.getGlobalBounds().contains(translated_pos)){
        takeOffButton.setTexture(resources.textureTakeOffActive);
    }
    else{
        takeOffButton.setTexture(resources.textureTakeOff);
    }
    if(cancelButton.getGlobalBounds().contains(translated_pos)){
        cancelButton.setTexture(resources.textureCancelActive);
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            options="powrót";
        }
    }
    else{
        cancelButton.setTexture(resources.textureCancel);
    }
}



DriverFound::~DriverFound() {

}
