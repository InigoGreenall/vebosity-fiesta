#include "main.hpp"
#include "softwarerender.hpp"
extern "C" {
    #define OLIVEC_IMPLEMENTATION
    #include "testing-include/olive.c"
}

void frame_drawer(void* pixel_buffer) {
    Olivec_Canvas oc = olivec_canvas((uint32_t*) pixel_buffer, WDITH, HEIGHT, WDITH);
    olivec_fill(oc, 0xFFFFFFFF);

    for (;; /* Loop over all entities */) {
        // entity.draw_entity(pixel_buffer, width, height)
    }
}