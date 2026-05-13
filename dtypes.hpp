#include <vector>

class Entity {
    public:
        int x;
        int y;
        int size;
        float fov;
        float max_accel;
        float energy_capacity;
		
		float veloX;
		float veloY;
		float accelX;
		float accelY;
		
        Entity();
        ~Entity();
        void draw_entity(void* pixel_buffer, int arr_width, int arr_height);
		
		void updateVelocity();
};