#include "GameBoard.h"
#include "Key_Inputs.h"
#include "Initialization.h"
#include "Collision_Detection.h"

PacMan_Game_Engine::PacMan_Game_Engine()
{
}


PacMan_Game_Engine::~PacMan_Game_Engine()
{
}

#include<SDL.h>
#include<stdio.h>
#include<string>
#include<thread>

//Define
bool quit = false;

//Event handler
SDL_Event events;

int main(int argc, char* args[])
{
	//Start up SDL and create window
	if (!init())
	{
		printf("Failed to initialize!\n");
	}
	else {
		loadBackgroundImage();
		if (!loadBackgroundImage()) {
			printf("Failed to load media!\n");
		}
		else {

			//While application is running
			while (!quit)
			{
				//Handle events on queue
				while (SDL_PollEvent(&events) != 0)
				{
					LoadEntities();
					std::thread thread(CollisionDetect);
					thread.join();
					//User requests quit
					if (events.type == SDL_QUIT)
					{
						quit = true;
					}
					else if (events.type == SDL_KEYDOWN) {
						switch (events.key.keysym.sym) {
						case SDLK_ESCAPE:
							quit = true; break;
						case SDLK_UP:
							UP(); break;
						case SDLK_DOWN:
							DOWN(); break;
						case SDLK_LEFT:
							LEFT(); break;
						case SDLK_RIGHT:
							RIGHT(); break;
						}
					}

				}
			}
		}
	}
	close();
	return 0;
}
