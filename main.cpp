#include "main.hpp"
#include "dtypes.hpp"
#include "softwarerender.hpp"
#include <cstddef>
#include <unistd.h>
extern "C" {
    #include "testing-include/client.h"
}

EntityMap* entity_map;

int main() {
    struct state_t* state = init(WDITH, HEIGHT);
    install_frame_drawer(state, frame_drawer);

    // TODO: do program setup
    entity_map = new EntityMap;
    for (size_t i = 0; i < WDITH; i += 70) {
        for (size_t j = 0; j < HEIGHT; j += 11) {
            entity_map->entities.push_back(new Entity(i + j%10, j, 5, 0, 0, 0));
        }
    }

    while (dispatch_events(state)) {

        // TODO: event loop

        for (Entity* e : entity_map->entities) {
            e->x += 10;
            e->y += 10;
        }

        usleep(20000);
        request_new_frame(state);
    }
    return 0;
}