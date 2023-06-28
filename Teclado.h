#include <SFML/Graphics.hpp>

namespace juego {
    namespace controlador {

        class Teclado {
        public:
            static Teclado& getKeyboard()
            {
                static Teclado instance;
                return instance;
            }

            int processKeys(sf::Event&) const;

        private:
            Teclado() {};
            Teclado(const Teclado&) = delete;
            
        };
    }
} 
