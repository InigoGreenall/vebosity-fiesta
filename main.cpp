#include <cstdint>
#include "dtypes.h"
#define OLIVEC_IMPLEMENTATION
extern "C" {
    #include "testing-include/olive.c"
    #include "testing-include/client.h"
}

#define WDITH 1280
#define HEIGHT 720

void frame_drawer(void* pixel_buffer) {
    Olivec_Canvas oc = olivec_canvas((uint32_t*) pixel_buffer, WDITH, HEIGHT, WDITH);
    olivec_fill(oc, 0xFFFFFFFF);
}

int main() {
    struct state_t* state = init(WDITH, HEIGHT);

    install_frame_drawer(state, frame_drawer);

    while (dispatch_events(state));
    return 0;
}