#include "dtypes.h"

Entity::Entity(int x, int y, int size, float fov, float max_accel, float energy_capacity) :
	x(x),
	y(y),
	size(size),
	fov(fov),
	max_accel(max_accel),
	energy_capacity(energy_capacity),
	veloX(0);
	veloY(0);
	accelX(0);
	accelY(0);
 {}

Entity::~Entity() {}

void Entity::update_velocity() {
	veloX += accelX;
	veloY += accelY;
	
	float mag = std::sqrt(pow(veloX,2), pow(veloY,2));
	
	mag -= DRAG; //universal fluid drag, needs implementing
}