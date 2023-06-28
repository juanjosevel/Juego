#include "ControladorJuego.h"

namespace juego {
    namespace controlador {

        ControladorJuego::ControladorJuego()
            : window_(std::make_shared<sf::RenderWindow>(sf::VideoMode(600, 600),
                "Card-Jitsu", sf::Style::Titlebar | sf::Style::Close))
            , world_(std::make_shared<modelo::Escenario>())
            , view_(std::make_shared<vista::VistaJuego>(world_, window_))
        {
        }

        void ControladorJuego::ejecutar()
        {
            // mientras la ventana este abierta
            while (window_->isOpen()) {

                // se crea un objeto evento
                sf::Event event;


                while (window_->pollEvent(event)) {
                    if (event.type == sf::Event::Closed) { //Si el evento es Closed cerramos la ventana
                        window_->close();
                    }
                    else if (event.type == sf::Event::KeyPressed) { // Si presionas una tecla
                        int action = Teclado::getKeyboard().processKeys(event);
                        if (action == 0)
                            world_->getPS()->move(false);
                        if (action == 1)
                            world_->getPS()->move(true);

                    }
 
                    if (!world_->update()) {
                    }
                }

                window_->clear(sf::Color::Black);
                view_->draw();
                window_->display();
            }
        }

    }
}