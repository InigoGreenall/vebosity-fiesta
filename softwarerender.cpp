#include "main.hpp"
#include "dtypes.hpp"
#include "softwarerender.hpp"
extern "C" {
    #define OLIVEC_IMPLEMENTATION
    #include "testing-include/olive.c"
}
#include <array>

extern unsigned short num_entities;
extern std::array<Entity*, MAX_ENTITIES> entities;

void frame_drawer(void* pixel_buffer) {
    Olivec_Canvas oc = olivec_canvas((uint32_t*) pixel_buffer, WDITH, HEIGHT, WDITH);
    olivec_fill(oc, 0xFFFFFFFF);

    for (unsigned short i = 0; i < num_entities; i++) {
        olivec_circle(oc, entities[i]->x, entities[i]->y, entities[i]->size, 0xFFFF0000);
    }
}