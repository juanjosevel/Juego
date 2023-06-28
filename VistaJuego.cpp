#include "VistaJuego.h"

namespace juego {
    namespace vista {

        const unsigned int VistaJuego::SCALE = 10;

        VistaJuego::VistaJuego(
            shared_ptr<modelo::Escenario> world, shared_ptr<sf::RenderWindow> window)
            : world_(world)
            , window_(window)
            , jugador_textura_(std::make_shared<sf::Texture>())
            , jugador_sprite_(std::make_shared<sf::Sprite>())
        {
            configurar_sprite_jugador();
        }

        void VistaJuego::draw()
        {
            Position pos = world_->getPS()->getPosition();
            jugador_sprite_->setPosition(pos.x * SCALE, pos.y * SCALE);
            window_->draw(*jugador_sprite_);
        }

        void VistaJuego::configurar_sprite_jugador()
        {
            cargar_textura_jugador();
            jugador_sprite_->setTexture(*jugador_textura_);
            jugador_sprite_->scale(0.2f, 0.2f);
        }

        void VistaJuego::cargar_textura_jugador()
        {
            try {
                if (!jugador_textura_->loadFromFile(
                    "pinguino.png",
                    sf::IntRect(300, 300, 80, 80))) {
                    throw std::runtime_error(
                        "No se puede abrir el archivo");
                }
            }
            catch (std::runtime_error& e) {
                std::cerr << "error: " << e.what() << std::endl;
            }
        }
    }
} 