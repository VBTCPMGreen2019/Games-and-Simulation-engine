#pragma once
class PacMan_Game_Engine
{
public:
	PacMan_Game_Engine();
	~PacMan_Game_Engine();
};

#include<SDL.h>
#include<stdio.h>
#include<string>
using namespace std;

//screen dimension
const int SCREEN_WIDTH = 637;
const int SCREEN_HEIGHT = 477;

//player location
int x = 55;
int y = 125;
//Player initial Boundaries
int Up = 45;
int Down = 395;
int Left = 45;
int Right = 562;


//key inputs
enum Keys {
	KEYS_ESCAPE,
	KEYS_UP,
	KEYS_DOWN,
	KEYS_LEFT,
	KEYS_RIGHT,
	KEYS_TOTAL,
};
//Extra


//Initialization
	//window
		SDL_Window* gWindow = NULL;
	//Surfaces
		SDL_Surface* gScreenSurface = NULL;
		SDL_Surface* gKeyPress[KEYS_TOTAL];
		SDL_Surface* gGameSurface = NULL;
	//Textures
		SDL_Texture* Background = NULL;
		SDL_Texture* Sprite1 = NULL;
		SDL_Texture* Sprite2 = NULL;
	//Renderer
		SDL_Renderer* gRenderer;
		SDL_Renderer* sRenderer;
	//Functions
		bool init();
		bool loadBackgroundImage();
		void loadBackground();
		void close();
		void LoadEntities();



void LoadEntities() {
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 0);
	SDL_RenderClear(gRenderer);
	SDL_RenderCopy(gRenderer, Background, NULL, NULL);

	SDL_Rect fillRect = { x , y, 30, 30 };
	SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
	SDL_RenderFillRect(gRenderer, &fillRect);

	loadBackground();
	SDL_RenderPresent(gRenderer);
}

void loadBackground() {
	/* Exterior Boundaries */
	SDL_Rect back1 = { 35, 35, 10, 400 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &back1);

	SDL_Rect back2 = { 35, 35, 557, 10 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &back2);

	SDL_Rect back3 = { 592, 35, 10, 400 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &back3);

	SDL_Rect back4 = { 35, 425, 557, 10 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &back4);
	/* Interior Boxes */
	SDL_Rect int1 = { 45, 45, 65, 80 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &int1);

	SDL_Rect int2 = { 45, 155, 65, 175 }; // bottom = 330
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &int2);

	SDL_Rect int3 = { 75, 365, 30, 30};
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &int3);

	SDL_Rect int4 = { 140, 75, 80, 50 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &int4);

	SDL_Rect int5 = { 250, 45, 80, 110}; 
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &int5);
	
	SDL_Rect int6 = { 530, 75, 30, 30 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &int6);

	SDL_Rect int7 = { 530, 135, 65, 175 }; // bottom = 310
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &int7);

	SDL_Rect int8 = { 530, 345, 65, 80 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &int8);

	SDL_Rect int9 = { 420, 345, 80, 50 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &int9);

	SDL_Rect intA = { 310, 315, 80, 120 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intA);

	SDL_Rect intB = { 140, 155, 30, 275 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intB);

	SDL_Rect intC = { 470, 45, 30, 265 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intC);

	SDL_Rect intD = { 360, 75, 80, 20};
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intD);

	SDL_Rect intE = {200, 375 , 80, 20};
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intE);

	SDL_Rect intF = { 200, 315 , 80, 30 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intF);

	SDL_Rect intG = { 200, 265 , 30, 50 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intG);

	SDL_Rect intH = { 360, 125, 80, 30 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intH);

	SDL_Rect intI = { 410, 155, 30, 60 };//
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intI);

	SDL_Rect intA1 = { 200, 155, 130, 30 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intA1);

	SDL_Rect intB1 = { 310, 285, 130, 30 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intB1);

	SDL_Rect intC1 = { 200, 185, 30, 40 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intC1);

	SDL_Rect intD1 = { 410, 245, 30, 40 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intD1);

	SDL_Rect intE1 = { 260, 215, 45, 40 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intE1);

	SDL_Rect intF1 = { 260, 255, 20, 30 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intF1);

	SDL_Rect intG1 = { 335, 215, 45, 40 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intG1);

	SDL_Rect intH1 = { 360, 185, 20, 30 };
	SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(gRenderer, &intH1);
}




