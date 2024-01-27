#include <iostream>
#include "raylib.h"
#include "core/ecs.h"

void CreateEntities()
{
	unsigned int components[] = {sizeof(int), sizeof(float)};
	ECS::Archetype* archetype = new ECS::Archetype(components, 2);
}

int main()
{

	CreateEntities();

	// InitWindow(800, 600, "My window");
	// SetTargetFPS(60);

	// while (!WindowShouldClose())
	// {

	// 	ClearBackground(BLACK);
	// 	EndDrawing();
	// }

	// CloseWindow();
	return 0; 
}