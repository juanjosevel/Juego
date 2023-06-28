#include "Escenario.h"

namespace juego {
    namespace modelo {

        Escenario::Escenario()
            : ps_(std::make_shared<Jugador>())
            , enemyships_(std::make_shared<EntityList>())
            , bullets_(std::make_shared<EntityList>())
        {
        }

        bool Escenario::update()
        {
            if (ps_->update()) {
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
