
#ifndef ELEMENTOJUEGO_H_
#define ELEMENTOJUEGO_H_

#include "Vector2D.h"

namespace juego {
    namespace modelo {

        class ElementoJuego {
        public:

            typedef util::Vector2D<unsigned int> Position;
            typedef util::Vector2D<unsigned int> Size;

            virtual ~ElementoJuego() {}
            virtual bool update() = 0;
            virtual Position getPosition() const = 0;
        };

    }
} 

#endif
