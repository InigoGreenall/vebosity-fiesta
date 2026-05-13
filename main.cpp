#include "main.hpp"
#include "dtypes.hpp"
#include "softwarerender.hpp"
#include <array>
extern "C" {
    #include "testing-include/client.h"
}

unsigned short num_entities;
std::array<Entity*, MAX_ENTITIES> entities;

int main() {
    struct state_t* state = init(WDITH, HEIGHT);
    install_frame_drawer(state, frame_drawer);

    // TODO: do program setup

    while (dispatch_events(state)) {

        // TODO: event loop

    }
    return 0;
}