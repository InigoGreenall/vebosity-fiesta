#include "dtypes.hpp"
#include <cmath>
#include <vector>

//######################################################
// Entity
Entity::Entity(int x, int y, int size, float fov, float max_accel, float energy_capacity) :
	x(x),
	y(y),
	size(size),
	fov(fov),
	max_accel(max_accel),
	energy_capacity(energy_capacity),
	velo_mag(0),
	velo_dir(0),
	accel_mag(0),
	accel_dir(0)
 {}

Entity::~Entity() {}

void Entity::update_velocity() {
	
	// mag -= DRAG; universal fluid drag, needs implementing
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