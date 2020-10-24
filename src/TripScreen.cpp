#include "TripScreen.hpp"

TripScreen::TripScreen() {
    //whereToGo.setFont(font);
    whereToGo.setString("Dokąd/n chcesz/n jechać?");
    whereToGo.setCharacterSize(70);
    whereToGo.setPosition(90,56);

    Text.setCharacterSize(70);
    Text.setPosition(50,380);

}

void TripScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(whereToGo,states);
    target.draw(Text,states);
}

void TripScreen::handleEvent(sf::Event &event, sf::RenderWindow &win) {

}

TripScreen::~TripScreen() {

}




