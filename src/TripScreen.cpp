#include "TripScreen.hpp"

TripScreen::TripScreen() {
    whereToGo.setFont(resources.font);
    whereToGo.setString("Dokąd\n chcesz\n jechać?");
    whereToGo.setCharacterSize(70);
    whereToGo.setPosition(90,56);

    Text.setFont(resources.font);
    Text.setCharacterSize(35);
    Text.setPosition(140,500);

}

void TripScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(whereToGo,states);
    target.draw(Text,states);
}

void TripScreen::handleEvent(sf::Event &event, sf::RenderWindow &win) {


    if (event.type == sf::Event::TextEntered){
        if (event.text.unicode < 128){
            playerInput = playerInput + static_cast<char>(event.text.unicode);
            Text.setString(playerInput);}}
}

TripScreen::~TripScreen() {

}




