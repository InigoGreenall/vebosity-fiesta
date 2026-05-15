#include "dtypes.hpp"
#include "main.hpp"
#include <cmath>
#include <vector>

Vec2::Vec2(float x, float y) :
	x(x),
	y(y)
{}

Vec2::Vec2() :
	x(0),
	y(0)
{}

Vec2 Vec2::operator+=(const Vec2& v) {
	this->x += v.x;
	this->y += v.y;
	return *this;
}

Vec2 Vec2::operator+(const Vec2& v) const {
	return Vec2(x+v.x, y+v.y);
}

Vec2 Vec2::operator*(float f) const {
	return Vec2(x*f, y*f);
}

float Vec2::length() const {
	return std::sqrt(x*x + y*y);
}

Vec2 Vec2::normalise() const {
	float mag = length();

	if(mag == 0) {
		return Vec2(0,0);
	} else {
		return Vec2(x/mag, y/mag);
	}

}

//######################################################
// Entity
Entity::Entity(int x, int y, int size, float fov, float max_accel, float energy_capacity) :
	x(x),
	y(y),
	size(size),
	fov(fov),
	max_accel(max_accel),
	energy_capacity(energy_capacity),
	velocity(0,0),
	acceleration(0,0)
 {}


// default constructor for testing
Entity::Entity() :
	x(WIDTH/2),
	y(HEIGHT/2),
	size(5),
	fov(30),
	max_accel(20),
	energy_capacity(200),
	velocity(0,0),
	acceleration(0,0)
{}

Entity::~Entity() {}

void Entity::update_velocity() {
	velocity += acceleration;

	float mag = velocity.length();
	float drag = pow(mag,2)*DRAG_COEFF*size;

	mag -= drag;
	Vec2 dir = velocity.normalise();
	velocity = dir*mag;
}


//######################################################
// EntityMap
EntityMap::EntityMap() {
	
}


void EntityMap::do_tick() {
	// 1. All entities make decisions via neural network
	
	// 2. Move all entities according to the decisions

	// 3. Check for eating, etc.
}