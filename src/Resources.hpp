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
    }
    sf::Font font;
    ~Resources();
private:

    void initFont(){
        //R"(..\\..\\Resources\\Retro.ttf)" windows
        if(! font.loadFromFile("../../Resources/Retro.ttf"))
        {
            std::cerr << strerror(errno) <<std::endl;
            abort();
        }
    }
};


#endif
