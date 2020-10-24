#ifndef DRIVEE_RESOURCES_HPP
#define DRIVEE_RESOURCES_HPP


#include "SFML/Graphics.hpp"
#include <iostream>
#include <cstring>
#include <cerrno>

class Resources {
public:
    Resources(){
        //initFont();
        initTextures();
    }
    sf::Font font;
    sf::Texture textureButtonDriver;
    sf::Texture textureButtonPassenger;
    sf::Texture textureButtonDriverActive;
    sf::Texture textureButtonPassengerActive;
    sf::Texture textureAppName;
    sf::Texture textureTakeOff;
    sf::Texture textureCancel;
    sf::Texture textureCarsBackground;

private:

    /*
    void initFont(){

        //R"(..\\..\\Resources\\Retro.ttf)" windows
        if(! font.loadFromFile("../../Resources/Retro.ttf"))
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
    }
    */

    void initTextures()
    {
        if(!textureButtonDriver.loadFromFile("../../Resources/prowadze-button.png") || !textureButtonPassenger.loadFromFile("../../Resources/podrozuje-button.png") || !textureButtonPassengerActive.loadFromFile("../../Resources/podrozuje-button-klikniete.png")  || !textureButtonDriverActive.loadFromFile("../../Resources/prowadze-button-klikniete.png") ||!textureAppName.loadFromFile("../../Resources/drivee.png") )
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
        if(!textureTakeOff.loadFromFile("../../Resources/zabierzsie-button.png") || !textureCancel.loadFromFile("../../Resources/anuluj-button.png")
        || !textureCarsBackground.loadFromFile("../../Resources/pawel-tlo-auta.png"))
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
    }
};


#endif
