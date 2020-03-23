#include "KeyboardBehavior.h"

KeyboardBehavior::KeyboardBehavior()
{
}


KeyboardBehavior::~KeyboardBehavior()
{
}

Vector2 KeyboardBehavior::update(Agent * agent, float deltaTime)
{
	Vector2 force = { 0,0 };

	if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))
		force.y = -500.0f;
	if (IsKeyDown(KEY_DOWN || KEY_S))
		force.y = 500.0f;
	if (IsKeyDown(KEY_LEFT || KEY_A))
		force.x = -500.0f;
	if (IsKeyDown(KEY_RIGHT || KEY_D))
		force.x = 500.0f;

	return force;
}
