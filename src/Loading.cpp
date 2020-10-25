#include "Loading.hpp"

Loading::Loading() {
initTexture();
initText();
}
void Loading::initTexture() {
    backGround.setTexture(resources.textureMap);
    backGround.setPosition(0,0);
}

void Loading::initText() {
    loading.setFont(resources.font);
    loading.setPosition(55,225);
    loading.setCharacterSize(40);
    loading.setString(L"Szukanie połączeń...");
    loading.setFillColor(sf::Color(0,0,0));
}

void Loading::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(backGround,states);
    target.draw(loading,states);
}
Loading::~Loading() {

}


