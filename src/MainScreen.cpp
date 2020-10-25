#include "MainScreen.hpp"

MainScreen::MainScreen()
{
    buttonDriver.setTexture(resources.textureButtonDriver);
    buttonPassenger.setTexture(resources.textureButtonPassenger);
    appName.setTexture(resources.textureAppName);
    buttonDriver.setPosition(220,620);
    buttonPassenger.setPosition(18,626);
    appName.setPosition(40,24);


}

void MainScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(appName,states);
    target.draw(buttonDriver,states);
    target.draw(buttonPassenger,states);

}
void MainScreen::handleEvent(sf::Event &event, sf::RenderWindow &win,sf::Vector2<float> &translated_pos) {

    if(buttonDriver.getGlobalBounds().contains(translated_pos)){
        buttonDriver.setTexture(resources.textureButtonDriverActive);
       if(sf::Mouse().isButtonPressed(sf::Mouse::Left))
           options="Drive";
    }
}

MainScreen::~MainScreen() {}


