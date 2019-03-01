#pragma once
/* Hard coding collision detection, if someone can find a better way to do this then go ahead */

void CollisionDetect();
void CollisionUp();
void CollisionDown();
void CollisionLeft();
void CollisionRight();

void CollisionDetect() {
	CollisionUp();
	CollisionDown();
	CollisionLeft();
	CollisionRight();
	SDL_Delay(10);
}

void CollisionUp() {
	if (x <= 100) {
		if (y <= 125) { Up = 126; }
		else if (y == 330) { Up = 330; }
	}
	else if (x > 100) {
		if (y <= 125) { Up = 45; }
	}
	
}

void CollisionDown() {
	
	if (x <= 100) {
		if (y <= 125) { Down = 124; }
	}
	else if (x > 100) {
		if (y <= 125) { Down = 395; }
	}
	
}

void CollisionLeft() {
	
}

void CollisionRight() {

}