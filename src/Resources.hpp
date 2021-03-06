#ifndef DRIVEE_RESOURCES_HPP
#define DRIVEE_RESOURCES_HPP


#include "SFML/Graphics.hpp"
#include <iostream>
#include <cstring>
#include <cerrno>

class Resources {
public:
    Resources(){
        initFont();
        initTextures();
    }
    sf::Font font;
    sf::Texture textureButtonDriver;
    sf::Texture textureButtonPassenger;
    sf::Texture textureButtonDriverActive;
    sf::Texture textureButtonPassengerActive;
    sf::Texture textureAppName;
    sf::Texture textureTakeOff;
    sf::Texture textureTakeOffActive;
    sf::Texture textureCancel;
    sf::Texture textureCancelActive;
    sf::Texture textureCarsBackground;
    sf::Texture textureMap;
    sf::Texture textureButtonUser;
    sf::Texture textureButtonUserActive;
    sf::Texture textureHomeIcon;
    sf::Texture textureWorkIcon;
    sf::Texture textureButtonBack;
    sf::Texture textureButtonBackActive;

private:


    void initFont(){

        //R"(..\\..\\Resources\\Retro.ttf)" windows
        if(! font.loadFromFile("../../Resources/OpenSans-Light.ttf"))
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
    }

    void initTextures()
    {
        if(!textureButtonDriver.loadFromFile("../../Resources/prowadze-button.png") || !textureButtonPassenger.loadFromFile("../../Resources/podrozuje-button.png") || !textureButtonPassengerActive.loadFromFile("../../Resources/podrozuje-button-klikniete.png")|| !textureButtonDriverActive.loadFromFile("../../Resources/prowadze-button-klikniete.png") ||!textureAppName.loadFromFile("../../Resources/drivee.png") )
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
        if(!textureTakeOff.loadFromFile("../../Resources/zabierzsie-button.png") || !textureCancel.loadFromFile("../../Resources/anuluj-button.png")
        || !textureCarsBackground.loadFromFile("../../Resources/pawel-tlo-auta.png") || !textureMap.loadFromFile("../../Resources/mapa.png") || !textureButtonUser.loadFromFile("../../Resources/user-button.png") || !textureButtonUserActive.loadFromFile("../../Resources/user-button-klikniete.png"))
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
        if(!textureHomeIcon.loadFromFile("../../Resources/home-icon.png") || !textureWorkIcon.loadFromFile("../../Resources/work-icon.png") || !textureButtonBack.loadFromFile("../../Resources/powrot-button.png"))
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
        if(!textureButtonBackActive.loadFromFile("../../Resources/powrot-button-klikniete.png") || !textureButtonBackActive.loadFromFile("../../Resources/powrot-button-klikniete.png") )
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
        if(!textureTakeOffActive.loadFromFile("../../Resources/zabierzsie-button-klikniete.png") || !textureCancelActive.loadFromFile("../../Resources/anuluj-button-klikniete.png") )
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
    }
};


#endif
