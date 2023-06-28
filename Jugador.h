#ifndef JUGADOR_H_
#define JUGADOR_H_

#include "ElementoJuego.h"
#include "Vector2D.h"

namespace juego {
    namespace modelo {

        class Jugador : public ElementoJuego {
        private:
            Position pos_;
        public:
            Jugador(const Position pos = Position(8, 19)); 
            void sacaCarta(const bool);
            Position getPosition() const { return pos_; }
        };
    }
}

#endif

