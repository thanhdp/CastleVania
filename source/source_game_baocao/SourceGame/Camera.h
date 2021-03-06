#pragma once
#include"MovableBox.h"
#include<d3dx9.h>
#include"ICameraLimit.h"
#include"MovableBox.h"
#include"Config.h"
class MovableObject;
class Camera : public MovableBox
{
private:
	CREATE_INSTANCE_INSIDE(Camera);
	MovableObject* player;
	ICameraLimit* cameraLimit;
public:
	bool preventMoving;
	void setCameraLimit(ICameraLimit* cameraLimit);
	void setPlayer(MovableObject* player);
	D3DXMATRIX getWorldToViewMatrix();
	void getWorldToViewLocation(int xW, int yW, int& xV, int& yV);
	void update();
	Camera();
	~Camera();
};

