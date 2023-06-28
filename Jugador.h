#ifndef JUGADOR_H_
#define JUGADOR_H_

#include "ElementoJuego.h"
//#include "Bullet.h"
#include "Vector2D.h"

namespace juego {
    namespace modelo {

        class Jugador : public ElementoJuego {
        private:
            Position pos_;
            Size size_;
            unsigned int hp_;
            unsigned int speed_;

        public:

            Jugador(const Position pos = Position(8, 19),
                const Size size = Size(3, 2), const unsigned int hp = 10,
                const unsigned int speed = 1);
            bool update();
            void sacaCarta(const bool);
            void hit(const unsigned int hp = 1);

            Position getPosition() const { return pos_; }
        };

    }
}

#endif

