#pragma once
#include "MovableObject.h"
#include"Player.h"
class Enemy :
	public MovableObject
{
public:
	void onInit(fstream& fs) {}
	void setDirectionFollowPlayer();
	void onCollision(MovableBox* other, int nx, int ny, float collisionTime);
	Enemy();
	~Enemy();
};

