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
            shared_ptr<Jugador> jugador_en_turno;
            shared_ptr<EntityList> tipoCarta;
            shared_ptr<EntityList> cartas;

        public:
            Escenario();            
            Position getPosition() const { return Position(); }
            shared_ptr<Jugador> getPS() const { return jugador_en_turno; }
            shared_ptr<EntityList> get_tipoCarta() const { return tipoCarta; }
            shared_ptr<EntityList> get_cartas() const { return cartas; }
        };
    }
}
#endif
