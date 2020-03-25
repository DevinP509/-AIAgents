#include "WanderBehavior.h"
#include <cstdlib>

Vector2 WanderBehavior::update(Agent* agent, float deltaTime)
{
	//Start with a random target on the edge of the sphere with a set radious around the agent
	float randRange = ((float)RAND_MAX) / 2;
	Vector2 targetPos = Vector2{ rand() - randRange, rand() - randRange }.normalize() * m_radius;
	//add a randomized vector to the target, with a magnitude spacified by a jitter amount
	targetPos += Vector2{ rand() - randRange, rand() - randRange }.normalize() * m_jitter;
	//Bring the target back to the radius of the sphere by normalising it and scaling by the radius
	targetPos = targetPos.normalize() * m_radius;
	//Add the agents heading, multiplied by the distance to the target
	Vector2 heading = agent->getVelocity().normalize();

	targetPos += heading;

	m_prevTarget.x = targetPos.x;
	m_prevTarget.y = targetPos.y;

	Vector2 pos = agent->getPosition();

	//Calculate the vector describing the direction to the target and normalize it
	Vector2 direction = targetPos - pos;
	direction = direction.normalize();
	//Multiply the direction by the speed we want the agent to move
	direction = direction * 150;
	//Subtract the agent's current velocity from the result to get the force we need to apply
	Vector2 force = direction - agent->getVelocity();

	//Return the force
	return force;

	return Vector2();
}
