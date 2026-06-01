#ifndef DTYPES_HPP
#define DTYPES_HPP

#include <vector>
#include <array>
#include <cmath>

struct Vec2 {
    float x, y;
    Vec2(float x, float y);
    Vec2();

    Vec2 operator+=(const Vec2& v);
    Vec2 operator+(const Vec2& v) const;
    Vec2 operator*(float f) const;

    float length() const;
    Vec2 normalise() const;
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
        std::array<std::vector<Entity*>, 64> collision_grid; //divided into 64 subsections

        void do_tick();
        void update_collision_grid();
        void check_collisions();
        void handle_collision(Entity* e1, Entity* e2);
};

#endif