#ifndef DTYPES_HPP
#define DTYPES_HPP

#include <vector>

class Entity {
    public:
        int x;
        int y;
        int size;
        float fov;
        float max_accel;
        float energy_capacity;
		
		float velo_mag;
		float velo_dir;
		float accel_mag;
		float accel_dir;
		
        Entity(int x, int y, int size, float fov, float max_accel, float energy_capacity);
        ~Entity();
		
		void update_velocity();
};

class EntityMap {
    public:
		EntityMap();
        ~EntityMap();

        std::vector<Entity*> entities;

        void do_tick();
};

#endif