#include "dtypes.hpp"
#include <cmath>

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