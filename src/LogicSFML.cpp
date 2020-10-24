#include "LogicSFML.hpp"

LogicSFML::LogicSFML(MainScreen &mainScreen) :mainScreen(mainScreen){}



void LogicSFML::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(mainScreen,states);
}

void LogicSFML::update(){


}

LogicSFML::~LogicSFML() noexcept {}

void LogicSFML::handleEvent(sf::Event &event, sf::RenderWindow &win) {

}
