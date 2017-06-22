#include "maze.h"

/**
 * main - The main function to run the maze game
 * @argc: The number of arguments passed to the program
 * @argv: All the arguments passed to the program
 * Return: 1 if failure, 0 if successful exit
 **/
int main(int argc, char *argv[])
{
	SDL_Instance instance;
	level *levels;
	level cur_level = {NULL, 0};
	/*char **map;*/
	size_t map_h = 0;
	int i, j, win_value = 0;
	int_s win = {0, 0};
	double_s play = {2, 2};
	double_s dir = {-1, 0};
	double_s plane = {0, 0.5};
	keys key_press = {0, 0, 0, 0};

	j = 0;
	if (argc < 2)
		return (1);
	levels = malloc(sizeof(level) * (argc - 1));
	if (levels == NULL)
		return (1);
	for (i = 1; i < argc; i++, j++)
	{
		cur_level.map = create_map(argv[i], &play, &win, &map_h);
		cur_level.height = map_h;
		levels[j] = cur_level;
	}
/*	map = create_map(argv[1], &play, &win, &map_h);*/
/*	if (levels == NULL)
	{
		printf("Unable to create map\n");
		return (1);
		}*/
	if (init_instance(&instance) != 0)
	{
		printf("Unable to initialize SDL_Instance\n");
		return (1);
	}
	while (1)
	{
		if (keyboard_events(&key_press))
			break;
/*		movement(key_press, &plane, &dir, &play, map);*/
		movement(key_press, &plane, &dir, &play, levels[0].map);
		if (check_win(play, win, &win_value))
			break;
/*		draw(instance, map, play, dir, plane);*/
		draw(instance, levels[0].map, play, dir, plane);
	}
	if (win_value)
		print_win();
/*	free_memory(instance, map, map_h);*/
	free_memory(instance, levels[0].map, levels[0].height);
	return (0);
}
