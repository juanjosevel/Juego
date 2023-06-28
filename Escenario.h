#ifndef ESCENARIO_H_
#define ESCENARIO_H_



#include "ElementoJuego.h"
#include "Jugador.h"
#include <list>
#include <memory>
#include <cassert>

namespace juego {
    namespace modelo {

        using std::shared_ptr;

        class Escenario : public ElementoJuego {


            typedef std::list<shared_ptr<ElementoJuego> > EntityList;

        private:
            shared_ptr<Jugador> ps_;
            shared_ptr<EntityList> enemyships_;
            shared_ptr<EntityList> cartas;

        public:
            Escenario();
            bool update();
            Position getPosition() const { return Position(); }
            shared_ptr<Jugador> getPS() const { return ps_; }
            shared_ptr<EntityList> get_enemyships() const { return enemyships_; }
            shared_ptr<EntityList> get_bullets() const { return cartas; }
        };

    }
}
#endif
