#include "MainScreen.hpp"

MainScreen::MainScreen()
{
    buttonDriver.setTexture(resources.textureButtonDriver);
    buttonPassenger.setTexture(resources.textureButtonPassenger);
    appName.setTexture(resources.textureAppName);
    buttonDriver.setPosition(16,817);
    buttonPassenger.setPosition(278,818);
    appName.setPosition(58,13);

}

void MainScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(appName,states);
    target.draw(buttonDriver,states);
    target.draw(buttonPassenger,states);

}

MainScreen::~MainScreen() {}