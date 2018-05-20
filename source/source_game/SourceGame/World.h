#pragma once
#include "TileMap.h"
#include"BaseObject.h"
#include"SpriteManager.h"
#include"Camera.h"
#include"CollisionsObjectCollection.h"
#include"CollisionTypeCollide.h"
#include"ICameraLimit.h"
#include"PlayerWeapon.h"
#include"QuadTree.h"
class World :
	public TileMap,
	public ICameraLimit
{
	BaseObject** gameObjects;
	int nObjects;
	Camera* camera;

	CollisionTypeCollide** collisionTypeCollides;
	int nCollisionTypeCollides;
	MovableObject* player;
	QuadTree quadTree;
public:
	void init(const char* tilesheetPath,
		const char* matrixPath,
		const char* objectsPath,
		const char* quadtreePath,
		const char* collisionTypeCollidesPath);
	void initObjects(const char* objectsPath);
	void initQuadtree(const char* quadtreePath);
	void initCollisionTypeCollides(const char* collisionTypeCollidesPath);

	void setPlayer(MovableObject* player);

	CollisionsObjectCollection* getCollisionsObjectCollection();
	World();
	~World();
	void update();
	void render();

	int getLeft();
	int getRight();
};
