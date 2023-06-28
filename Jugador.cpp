#include "Jugador.h"

namespace juego {
    namespace modelo {

        Jugador::Jugador(const Position pos, const Size size,
            const unsigned int hp, const unsigned int speed)
            : pos_(pos)
            , size_(size)
            , hp_(hp)
            , speed_(speed)
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
