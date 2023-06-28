#include "Jugador.h"

namespace juego {
    namespace modelo {

        Jugador::Jugador(const Position pos)
            : pos_(pos)
        {
        }

        bool Jugador::update()
        {
            if (hp_ <= 0) {
                return false;
            }
            else {
                return true;
            }
        }

        void Jugador::sacaCarta(const bool temp_carta)
        {

        }
    }
} 
