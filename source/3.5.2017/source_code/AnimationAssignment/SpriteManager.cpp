#include "SpriteManager.h"



SpriteManager * SpriteManager::instance = 0;
SpriteManager * SpriteManager::getInstance()
{
	if (instance == 0)
		instance = new SpriteManager();
	return instance;
}

Sprite * SpriteManager::getSprite(SPRITE_INFO spriteIndex)
{
	return getInstance()->getSprites()[spriteIndex];
}

Sprite ** SpriteManager::getSprites()
{
	return sprites;
}

SpriteManager::SpriteManager()
{
	Texture* enemiesImage = new Texture();
	enemiesImage->Init("Data/Sprites/Enemies/image.png", 0);
	enemiesImage->direction = Left;

	sprites = new Sprite*[SI_COUNT];

	sprites[SI_SIMON] = new Sprite();
	sprites[SI_SIMON]->ReadFromFile("Data/Sprites/Simon/info.simple.txt", "Data/Sprites/Simon/image.png");
	sprites[SI_SIMON]->img->direction = Right;

	sprites[SI_ZOMBIE] = new Sprite();
	sprites[SI_ZOMBIE]->readInfo("Data/Sprites/Enemies/zoombie.info.txt");
	sprites[SI_ZOMBIE]->img = enemiesImage;

	sprites[SI_EAGLE] = new Sprite();
	sprites[SI_EAGLE]->readInfo("Data/Sprites/Enemies/eagle.info.txt");
	sprites[SI_EAGLE]->img = enemiesImage;

	sprites[SI_PANTHER] = new Sprite();
	sprites[SI_PANTHER]->readInfo("Data/Sprites/Enemies/panther.info.txt");
	sprites[SI_PANTHER]->img = enemiesImage;

	sprites[SI_BAT] = new Sprite();
	sprites[SI_BAT]->readInfo("Data/Sprites/Enemies/bat.info.txt");
	sprites[SI_BAT]->img = enemiesImage;

	sprites[SI_CANDLE] = new Sprite();
	sprites[SI_CANDLE]->ReadFromFile("Data/Sprites/Candle/info.simple.txt", "Data/Sprites/Candle/image.png");
	sprites[SI_CANDLE]->img->direction = Right;

	sprites[SI_BONE_DRAGON] = new Sprite();
	sprites[SI_BONE_DRAGON]->initFromSingleFrame("Data/Sprites/BoneDragon/image.png");
	sprites[SI_BONE_DRAGON]->img->direction = Left;

	sprites[SI_FRANKENSTEIN] = new Sprite();
	sprites[SI_FRANKENSTEIN]->ReadFromFile("Data/Sprites/Frankenstein/info.simple.txt", "Data/Sprites/Frankenstein/image.png");
	sprites[SI_FRANKENSTEIN]->img->direction = Left;

	sprites[SI_EXPLOSION_EFFECT] = new Sprite();
	sprites[SI_EXPLOSION_EFFECT]->ReadFromFile("Data/Sprites/ExplosionEffect/info.simple.txt", "Data/Sprites/ExplosionEffect/image.png");
	sprites[SI_EXPLOSION_EFFECT]->img->direction = Left;

	sprites[SI_SMALL_HEART] = new Sprite();
	sprites[SI_SMALL_HEART]->initFromSingleFrame("Data/Sprites/Items/small_heart.png");
	sprites[SI_SMALL_HEART]->img->direction = Left;


	sprites[SI_MERMAN] = new Sprite();
	sprites[SI_MERMAN]->readInfo("Data/Sprites/Enemies/merman.info.txt");
	sprites[SI_MERMAN]->img = enemiesImage;

	sprites[SI_BRIDGE] = new Sprite();
	sprites[SI_BRIDGE]->initFromSingleFrame("Data/Sprites/Bridge/image.png");
	
}


SpriteManager::~SpriteManager()
{
}