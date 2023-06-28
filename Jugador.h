#ifndef JUGADOR_H_
#define JUGADOR_H_

#include "ElementoJuego.h"
#include "Vector2D.h"

namespace juego {
    namespace modelo {

        class Jugador : public ElementoJuego {
        private:
            Posicion pos_;
        public:
            Jugador(const Posicion pos = Posicion(8, 19)); 
            void sacaCarta(const bool);
            Posicion getPosition() const { return pos_; }
        };
    }
}

#endif

