#include "raylib.h"

int main() {
	int posX = 0;
	InitWindow(800, 450, "test");
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		posX++;
		// test
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawRectangle(posX, 100, 50, 50, BLUE);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
