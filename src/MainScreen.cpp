#include "MainScreen.hpp"

MainScreen::MainScreen()
{

    buttonDriver.setTexture(resources.textureButtonDriver);
    buttonPassenger.setTexture(resources.textureButtonPassenger);
    appName.setTexture(resources.textureAppName);
    buttonDriver.setPosition(230,626);
    buttonPassenger.setPosition(18,626);
    appName.setPosition(20,74);
    map.setTexture(resources.textureMap);
    map.setPosition(0,0);
    userButton.setTexture(resources.textureButtonUser);
    userButton.setPosition(337,10);

}

void MainScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(map,states);
    target.draw(appName,states);
    target.draw(buttonDriver,states);
    target.draw(buttonPassenger,states);
    target.draw(userButton,states);

}
void MainScreen::handleEvent(sf::Event &event, sf::RenderWindow &win,sf::Vector2<float> &translated_pos) {


    if(buttonDriver.getGlobalBounds().contains(translated_pos)){
        buttonDriver.setTexture(resources.textureButtonDriverActive);
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            options="Drive";
            }
    }
    else{
        buttonDriver.setTexture(resources.textureButtonDriver);
    }


}

MainScreen::~MainScreen() {}


