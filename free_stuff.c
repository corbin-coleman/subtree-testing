#include "maze.h"

/**
 * free_memory - Free close all manually created memory
 * @instance: SDL_Instance containing window and renderer
 * @map: 2D array representing map of play space
 * @map_h: The height of the map
 **/
void free_memory(SDL_Instance instance, char **map, size_t map_h)
{
	free_map(map, map_h);
	SDL_DestroyRenderer(instance.renderer);
	SDL_DestroyWindow(instance.window);
	SDL_Quit();
}

/**
 * free_map - Free the map 2D array
 * @map: 2D array representing the map of the play space
 * @map_h: Height of map
 **/
void free_map(char **map, size_t map_h)
{
	while (map_h > 0)
	{
		free(map[map_h]);
		map_h--;
	}
	free(map[0]);
	free(map);
}
