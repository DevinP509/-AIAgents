#include "Agent.h"
#include "Behavior.h"

void Agent::update(float deltatime)
{
	//Set force to zero
	Vector2 totalForce = { 0,0 };
	//For each Behavior in the Behavior list
	for (auto i = m_BehaviorList.begin(); i != m_BehaviorList.end(); i++)
	{
		//Call the Behavior's update function
		Vector2 force = (*i)->update(this, deltatime);
		//Add the return value to total force
		totalForce += force;
	}

	//Add total force times delta time to velocity
	addForce(totalForce * deltatime);
	//Add velocity times delta time to position
	m_Position += m_Velocity * deltatime;
}

void Agent::draw()
{
	DrawRectangle(m_Position.x, m_Position.y, 50, 50, DARKBLUE);
}

void Agent::addBehavior(Behavior * behavior)
{
	//Add the Behavior to the Behavior list
	m_BehaviorList.insert(m_BehaviorList.end(), behavior);
}

void Agent::addForce(Vector2 force)
{
	m_Velocity += force;
}
