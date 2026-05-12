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
		
		void updateVelocity();
};