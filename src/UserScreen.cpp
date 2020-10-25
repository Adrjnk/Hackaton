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
textUsername.setPosition(115,50);
textUsername.setString(L"Paweł ");

    textPoints.setFont(resources.font);
    textPoints.setCharacterSize(40);
    textPoints.setFillColor(sf::Color::Black);
    textPoints.setPosition(88,143);
    textPoints.setString("Punkty:3030");

    textCO2=textPoints;
    textCO2.setString(L"  w tym miesiącu \nzatrzymałeś emisję \n   3566 kg CO2\n     Dziękujemy!");
    textCO2.setPosition(75,207);
    textCO2.setCharacterSize(35);
    textRoads=textPoints;
    textRoads.setString(L"Stałe trasy");
    textRoads.setPosition(70,435);
    textRoads.setCharacterSize(55);
    textRoads.setStyle(sf::Text::Bold);
    textDestinations=textPoints;
    textDestinations.setString(L"Wyspa Słodowa \nPolitechnika");
    textDestinations.setPosition(125,530);

}

void UserScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
target.draw(homeIcon);
target.draw(workIcon);
target.draw(backButton);
target.draw(textUsername);
target.draw(textPoints);
target.draw(textCO2);
target.draw(textRoads);
target.draw(textDestinations);
}

void UserScreen::handleEvent(sf::Event &event, sf::RenderWindow &win) {

}

UserScreen::~UserScreen() {

}


