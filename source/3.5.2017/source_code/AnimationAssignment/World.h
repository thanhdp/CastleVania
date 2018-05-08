#pragma once
#include "TileMap.h"
#include"BaseObject.h"
#include"SpriteManager.h"
#include"Camera.h"
#include"CollisionsObjectCollection.h"
#include"CollisionTypeCollide.h"
#include"Weapon.h"
#include"QuadTree.h"
class World :
	public TileMap
{
	BaseObject** gameObjects;
	int nObjects;
	Camera* camera;
	CollisionsObjectCollection collisionObjectCollection;

	CollisionTypeCollide** collisionTypeCollides;
	int nCollisionTypeCollides;
	SimonPlayer* simon;
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

	CollisionsObjectCollection* getCollisionsObjectCollection();
	World();
	~World();
	void update();
	void render();
};
