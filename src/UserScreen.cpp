#include "UserScreen.hpp"




UserScreen::UserScreen() {
homeIcon.setTexture(resources.textureHomeIcon);
workIcon.setTexture(resources.textureWorkIcon);
homeIcon.setPosition(38,530);
workIcon.setPosition(44,587);
backButton.setTexture(resources.textureButtonBack);
backButton.setPosition(108,684);
textUsername.setFont(resources.font);
textUsername.setCharacterSize(65);
textUsername.setFillColor(sf::Color::Black);
textUsername.setPosition(56,50);
textUsername.setString("username");

    textPoints.setFont(resources.font);
    textPoints.setCharacterSize(40);
    textPoints.setFillColor(sf::Color::Black);
    textPoints.setPosition(88,143);
    textPoints.setString("points:3030");
}

void UserScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
target.draw(homeIcon);
target.draw(workIcon);
target.draw(backButton);
target.draw(textUsername);
target.draw(textPoints);
}

void UserScreen::handleEvent(sf::Event &event, sf::RenderWindow &win) {

}

UserScreen::~UserScreen() {

}


