#pragma once
#include"List.h"
#include"CollisionType.h"
#include"BaseObject.h"
class CollisionsObjectCollection
{
	List<BaseObject*>* collisionsObjectCollection;
public:
	CollisionsObjectCollection();
	~CollisionsObjectCollection();

	List<BaseObject*>* getCollection(COLLISION_TYPE collisionType);

	void addObject(BaseObject* obj);
	void removeObject(BaseObject* obj);

	void clearAll();
};
