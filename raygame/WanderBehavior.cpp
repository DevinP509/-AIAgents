#include "WanderBehavior.h"

Vector2 WanderBehavior::update(Agent* agent, float deltaTime)
{
	//Start with a random target on the edge of the sphere with a set radious around the agent
	//add a randomized vector to the target, with a magnitude spacified by a jitter amount
	//Bring the target back to the radius of the sphere by normalising it and scaling by the radius
	//Add the agents heading, multiplied by the distance to the target
	return Vector2();
}
