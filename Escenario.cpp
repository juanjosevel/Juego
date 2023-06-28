#include "Escenario.h"

namespace juego {
    namespace modelo {

        Escenario::Escenario()
            : jugador1(std::make_shared<Jugador>())
        {
        }

        bool Escenario::update()
        {
            if (jugador1->update()) {
                for (auto it = tipoCarta->begin(); it != tipoCarta->end();
                    ++it) {
                    if (!(*it)->update()) {
                        tipoCarta->erase(it);
                    }
                }
                for (auto it = cartas->begin(); it != cartas->end(); ++it) {
                    if (!(*it)->update()) {
                        cartas->erase(it);
                    }
                }
                return true;
            }
            return false;
        }

    }
}
