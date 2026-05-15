#include "main.hpp"
#include "dtypes.hpp"
#include "softwarerender.hpp"
#include <array>
extern "C" {
    #include "testing-include/client.h"
}

EntityMap* entity_map;

int main() {
    struct state_t* state = init(WIDTH, HEIGHT);
    install_frame_drawer(state, frame_drawer);

    // TODO: do program setup
    entity_map = new EntityMap;
    entity_map->entities.push_back(new Entity(200, 200, 100, 0, 0, 0));

    while (dispatch_events(state)) {

        // TODO: event loop

        entity_map->entities[0]->x += 1;

        request_new_frame(state);
    }
    return 0;
}