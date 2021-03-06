#pragma once
#include"Rect.h"
#include"CollisionType.h"

class MovableBox : public Rect
{
	float dx, dy;
	// loai va cham
	COLLISION_TYPE collisionType;
public:
	bool isCollision;
	bool isChangeDxOrDy;
	COLLISION_TYPE getCollisionType();
	void setCollisionType(int collisionType);
	virtual void setDx(float dx);
	void setDy(float dy);
	void setIsCollision(bool isCollision);
	float getDx();
	float getDy();
	float getNextFrameX();
	float getNextFrameY();
	virtual void updateLocation();
	virtual bool canCollision();
	virtual void onIntersect(MovableBox* other);
	virtual void onCollision(MovableBox* other, int nx, int ny, float collisionTime);
	virtual void update();
	void preventMoveWhenCollision(float collisionTime, int nx, int ny);
	MovableBox();
	~MovableBox();
};

