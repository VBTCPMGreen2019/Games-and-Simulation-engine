#pragma once

void start() {
	
	
}

bool init() {
	bool success = true;
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError()); success = false;
		success = false;
	}
	else {
		gWindow = SDL_CreateWindow("Pac Man", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL) {
			printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
			success = false;
		}
		else {
			gScreenSurface = SDL_GetWindowSurface(gWindow);
			gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
			if (gRenderer == NULL) {
				printf("Game Renderer could not be created! SDL Error: %s\n", SDL_GetError());
				success = false;
			}
			else {
			}
		}
	}
	return success;
}

bool loadBackgroundImage() {
	bool success = true;
	/*	gGameSurface = SDL_LoadBMP("Background.bmp");
		if (gGameSurface == NULL) {
			printf("SDL could not load Background! SDL Error: %s\n", SDL_GetError());
			success = false;
		}
		else {
			Background = SDL_CreateTextureFromSurface(gRenderer, gGameSurface);
			SDL_FreeSurface(gGameSurface);
			SDL_RenderCopy(gRenderer, Background, NULL, NULL);
		}*/
	return success;
}

void close() {
	for (int i = 0; i < KEYS_TOTAL; i++) {
		SDL_FreeSurface(gKeyPress[i]);
		gKeyPress[i] = NULL;
	}
	SDL_FreeSurface(gScreenSurface);
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;
	SDL_Quit();
}