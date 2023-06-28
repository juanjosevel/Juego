#include "Teclado.h"

namespace juego {
    namespace controlador {

        int Teclado::processKeys(sf::Event& event) const
        {
            switch (event.key.code) {
            case sf::Keyboard::Left:
                return 0;
                break;
            case sf::Keyboard::Right:
                return 1;
                break;
            case sf::Keyboard::Space:
                return 2;
                break;
            default:
                return -1;
            }
        }

    } 
} 