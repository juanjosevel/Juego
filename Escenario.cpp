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
                for (auto it = enemyships_->begin(); it != enemyships_->end();
                    ++it) {
                    if (!(*it)->update()) {
                        enemyships_->erase(it);
                    }
                }
                for (auto it = bullets_->begin(); it != bullets_->end(); ++it) {
                    if (!(*it)->update()) {
                        bullets_->erase(it);
                    }
                }
                return true;
            }
            return false;
        }

    }
}