#include "LogicSFML.hpp"

LogicSFML::LogicSFML(MainScreen &mainScreen, ChooseScreen &chooseScreen,
                     TripScreen &tripScreen,UserScreen &userScreen)
                     :mainScreen(mainScreen),chooseScreen(chooseScreen),tripScreen(tripScreen)
                     ,userScreen(userScreen)

                     {




}

void LogicSFML::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(mainScreen,states);

}

void LogicSFML::update(){


}
void LogicSFML::handleEvent(sf::Event &event, sf::RenderWindow &win) {

}

LogicSFML::~LogicSFML() noexcept {}






