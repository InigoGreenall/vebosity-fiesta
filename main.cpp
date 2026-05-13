#include "main.hpp"
#include "dtypes.hpp"
#include "softwarerender.hpp"
extern "C" {
    #include "testing-include/client.h"
}


int main() {
    struct state_t* state = init(WDITH, HEIGHT);
    install_frame_drawer(state, frame_drawer);
    while (dispatch_events(state)) {

        // TODO: event loop

    }
    return 0;
}