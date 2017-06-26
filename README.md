# The Maze
This project is a first person '3D' maze game. Similar to Wolfenstein or Doom, minus enemies and weapons, although they may be added later. It was made using SDL2 and C. It runs on Mac OS X and Debian/Ubuntu. The game uses the technique raycasting to create the apparent 3D nature of the maze.

## Start the Game
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

After running `./maze maps/level_1` you should see a screen like this:
<img src="imgs/initial_load.png" width=50% height=50% alt="Screenshot of Red Game Screen" align="middle">

If you're using the provided maps it'll just be a red screen, but that's not all. If you rotate with the arrow keys to the right you'll see the rest of the maze:

<img src="imgs/move_first.png" width=50% height=50% alt="Screenshot of Game Screen w/ Columns"/>

## Play the Game
The goal of the game is to find the end of the maze. To move through the maze use the arrow keys. The left and right arrow keys will rotate the player. The up and down arrow keys will move the player forward or backward.

Currently the player's starting position and the end goal position of the maze can be decided when creating the map file. If no positions are stated in the file then the player starts in the top left corner and the goal will be in the last floor space in the file.

When you have found the end of the maze you will either move, rather abruptly, to the next maze or the game will exit and you will be greeted with a win message in your console.

<img src="imgs/win_screen.png" alt="Win Screenshot" width=50% height=50%>

## Creating a Maze
The files in the maps/ directory provide examples of the file format for a maze to work with this game. The different characters in the file represent different colored walls, the floor, the player position, or the position of the end goal.

Example of a maze file:

<img src="imgs/level_1.png" alt="Map File" width=50% height=50%>

In the image above the player starts 2 spaces in from the top left corner, and the end goal is placed in the bottom left most space that isn't a wall. There are five columns that are mostly blue, but have green, yellow, and white wall chunks in them.

**Map File Characters' in Game Meanings**
- **0**: Floor/walkable space
- **1**: Red Wall
- **2**: Green Wall
- **3**: Blue Wall
- **4**: Yellow Wall
- **w**: End goal
- **p**: Player start position
- All other characters will be defaulted to white walls

### Authors
**Corbin Coleman** \<corbincol@gmail.com> <a href="https://twitter.com/CorbinMColeman">@CorbinMColeman</a>

## This project is still a work in progress more detail on the project will be available in the future
