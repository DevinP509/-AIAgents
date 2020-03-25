#include "KeyboardBehavior.h"

KeyboardBehavior::KeyboardBehavior()
{
}


KeyboardBehavior::~KeyboardBehavior()
{
}

Vector2 KeyboardBehavior::update(Agent* agent, float deltaTime)
{
	Vector2 force = { 0,0 };

	if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))
		force.y = -400.0f;
	if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))
		force.y = 400.0f;
	if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
		force.x = -400.0f;
	if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
		force.x = 400.0f;

	return force;
}
