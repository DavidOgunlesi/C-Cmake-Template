#include <iostream>
#include "raylib.h"
#include "core.ecs.h"

int main()
{
	InitWindow(800, 600, "My window");
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		CreateEntities();

		ClearBackground(BLACK);
		EndDrawing();
	}

	CloseWindow();
	return 0; 
}

void CreateEntities()
{
	ECS::Archetype archetype = ECS::Archetype([sizeof(ECS::TransformComponent)]);
}
