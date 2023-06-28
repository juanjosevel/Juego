#include "Teclado.h"
#include "Escenario.h"
#include "VistaJuego.h"
#include <memory>

namespace juego {
    namespace controlador {

        using std::shared_ptr;

        class ControladorJuego {
        private:
            shared_ptr<sf::RenderWindow> window_;
            shared_ptr<modelo::Escenario> world_;
            shared_ptr<vista::VistaJuego> view_;

        public:
            ControladorJuego();
            virtual ~ControladorJuego() { window_->close(); }
            void ejecutar();
        };
    }
}

