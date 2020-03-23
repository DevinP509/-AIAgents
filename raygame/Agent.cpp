#include "Agent.h"

void Agent::update(float deltatime)
{
	//Set force to zero
	//For each Behavior in the Behavior list
		//Call the Behavior's update function
		//Add the return value to total force
	//Add total force times delta time to velocity
	//Add velocity times delta time to position
}

void Agent::draw()
{
	DrawRectangle(m_Position.x, m_Position.y, 50, 50, DARKBLUE);
}

void Agent::addBehavior(Behavior * behavior)
{
}
