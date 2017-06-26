# The Maze
This project is a first person '3D' maze game. Similar to Wolfenstein or Doom, minus enemies and weapons, although they may be added later. It was made using SDL2 and C. It runs on Mac OS X and Debian/Ubuntu. The game uses the technique raycasting to create the apparent 3D nature of the maze.

## Play the Game
First step is to clone the repo:
```
git clone https://github.com/corbin-coleman/maze.git
```

Compile all .c files in the maze directory:
```
gcc -Wall -Werror -Wextra -pedantic -I/usr/local/include/SDL2 -D_THREAD_SAFE -L/usr/local/lib -lSDL2 *.c -o maze
```

Run the maze with the map you'd like to play:
```
./maze maps/level_1
```
Or you can run with multiple maps at once:
```
./maze maps/level_1 maps/level_2
```

Some basic maps are provided in this repo in the maps/ directory, but you can make your own maps to play as well.

## This project is still a work in progress more detail on the project will be available in the future
