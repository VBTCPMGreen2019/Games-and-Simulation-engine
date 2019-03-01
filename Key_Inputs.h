#pragma once
using namespace std;

void key_UP();
void key_DOWN();
void key_LEFT();
void key_RIGHT();
bool stop = false;


void UP() {
	stop = true;
	SDL_Delay(5);
	key_UP();
}

void DOWN() {
	stop = true;
	SDL_Delay(5);
	key_DOWN();
}

void LEFT() {
	stop = true;
	SDL_Delay(5);
	key_LEFT();
}

void RIGHT() {
	stop = true;
	SDL_Delay(5);
	key_RIGHT();
}


void key_UP() {
	for (; y >= Up; y -= 1) {
		if (stop == true) {
			Up = y;
		}
		else {
			LoadEntities();
			SDL_Delay(10);
		}
	}
}
void key_DOWN() {
	for (; y <= Down; y += 1) {
		if (stop == true) {
			Down = y;
		}
		else {
			LoadEntities();
			SDL_Delay(10);
		}
	}
}
void key_LEFT() {
	for (; x >= Left; x -= 1) {
		if (stop == true) {
			Left = x;
		}
		else {
			LoadEntities();
			SDL_Delay(10);
		}
	}
}
void key_RIGHT() {
	for (; x <= Right; x += 1) {
		if (stop == true) {
			Right = x;
		}
		else {
			LoadEntities();
			SDL_Delay(10);
		}
	}
}
