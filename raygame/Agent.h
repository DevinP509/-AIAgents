#pragma once
#include "raylib.h"
#include <vector>

class Behavior;

class Agent {
public:
	Agent() {}
	virtual ~Agent() {}

	//Update the agent and its behaviors
	virtual void update(float deltatime);

	//Draw the agent
	virtual void draw();

	//add a behavior to the agent
	void addBehavior(Behavior* behavior);

	//movement functions
	void setPosition(Vector2 position) { m_Position = position; }
	Vector2 getPosition() { return m_Position; }

	void setVelocity(Vector2 velocity) { m_Velocity = velocity; }
	Vector2 getVelocity() { return m_Velocity; }

private:
	std::vector<Behavior*> m_BehaviorList;

	Vector2 m_Position;
	Vector2 m_Velocity;
};