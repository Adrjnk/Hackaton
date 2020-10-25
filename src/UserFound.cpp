#include <UserFound.hpp>

UserFound::UserFound() {
    background.setTexture(resources.textureCarsBackground);
    background.setPosition(0,0);
    takeOffButton.setTexture(resources.textureTakeOff);
    takeOffButton.setPosition(15,390);
    cancelButton.setTexture(resources.textureCancel);
    cancelButton.setPosition(225,390);
    textPawel.setFont(resources.font);
    textPawel.setPosition(10,55);
    textPawel.setCharacterSize(35);
    textPawel.setString(L"Maciek jest 200m od ciebie \n i chce się z tobą zabrać!");
    textPawel.setFillColor(sf::Color(0,0,0));
}


void UserFound::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(background);
    target.draw(takeOffButton);
    target.draw(cancelButton);
    target.draw(textPawel);
}

void UserFound::handleEvent(sf::Event &event, sf::RenderWindow &win,sf::Vector2<float> &translated_pos) {
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



UserFound::~UserFound() {}
