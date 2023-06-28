
#include <SFML/Graphics.hpp>

 /*
  * Singleton class:
  * For desgin considerations see:
  * https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
  */
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
            //Keyboard& operator=(const Keyboard&) = delete;
        };
    }
} 
