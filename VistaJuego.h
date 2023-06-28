#ifndef VISTAJUEGO_H_
#define VISTAJUEGO_H_

#include "EScenario.h"
#include "Vector2D.h"
#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>

namespace juego {
    namespace vista {

        using std::shared_ptr;

        class VistaJuego {
        private:
            shared_ptr<modelo::Escenario> world_;
            shared_ptr<sf::RenderWindow> window_;
            shared_ptr<sf::Texture> jugador_textura_;
            shared_ptr<sf::Sprite> jugador_sprite_;

            void configurar_sprite_jugador();
            void cargar_textura_jugador();

        public:
            typedef util::Vector2D<unsigned int> Position;
            static const unsigned int SCALE;

            VistaJuego(shared_ptr<modelo::Escenario>, shared_ptr<sf::RenderWindow>);

            void draw();
        };
    }
}

#endif

