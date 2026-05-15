#ifndef DTYPES_HPP
#define DTYPES_HPP

#include <vector>
#include <cmath>

struct Vec2 {
    float x, y;
    Vec2(float x, float y);
    Vec2();

    Vec2 operator+=(const Vec2& v);
    Vec2 operator+(const Vec2& v) const;
    Vec2 operator*(float f) const;
};


class Entity {
    public:
        int x;
        int y;
        int size;
        float fov;
        float max_accel;
        float energy_capacity;
		
		Vec2 velocity;
        Vec2 acceleration;
		
        Entity(int x, int y, int size, float fov, float max_accel, float energy_capacity);
        Entity();

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