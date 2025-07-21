#include "raylib.h"
#include <iostream>
using namespace std;

const int WIDTH = 800;
const int HEIGHT = 800;

const int FPS = 30;

int x, y;

int i = 0;

int main() {
	InitWindow(WIDTH, HEIGHT, "Wave visual");
	SetTargetFPS(FPS);

	while (!WindowShouldClose() && i < WIDTH) {

		x = i;
		y = (HEIGHT / 2) + sinf(i * (PI / 180)) * 100;//Change the sinf to tanf or cosf accordingly 

		BeginDrawing();

		DrawPixel(x, y, WHITE);

		EndDrawing();

		i++;
	}

	CloseWindow();
	return 0;
}
