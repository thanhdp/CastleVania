#pragma once
#include"Sprite.h"
enum SPRITE_INFO
{
	//cua chuyen area khi di cau thang
	SI_ISTOPWATCH = -18,
	SI_IGOLDPOTION = -17,
	SI_IAXE = -16,
	SI_IHOLYCROSS = -15,
	SI_IHOLYWATER = -14,
	SI_IDAGGER = -13,
	SI_IBIGHEART = -12,
	SI_GATE_3 = -11,
	SI_ISMALLHEART = -10,
	SI_IMORNING_STAR = -9 ,
	SI_EXIT_STAIR = -8 ,
	SI_MERMAN_BULLET = -7,
	SI_CANDLE = -6,
	SI_TORCH = -5,
	SI_STAIR = -4,
	//cua chuyen area o area 0
	SI_GATE_1 = -3,
	SI_DOOR = -2,
	SI_GROUND = -1,
	SI_ZOMBIE, //0
	SI_PANTHER,//1
	SI_SIMON = 2,//2
	//cua area1 sang area 2
	SI_GATE2,//3
	SI_MERMAN,//4
	SI_BAT,//5
	SI_EXPLOSION_EFFECT = 7,//7
	SI_WEAPON = 15,//15
	SI_MISC,//16
	SI_COUNT
};

enum MISC_SPRITE_ID
{
	MISC_SPRITE_ID_NUMBER,
	MISC_SPRITE_ID_MORNING_STAR,
	MISC_SPRITE_ID_LOST_HEALTH,
	MISC_SPRITE_ID_KNIFE_ITEM,
	MISC_SPRITE_ID_TORCH,
	MISC_SPRITE_ID_EXPLOSION_EFFECT,
	MISC_SPRITE_ID_CANDLE,
	MISC_SPRITE_ID_MERMAN_BULLET,
	MISC_SPRITE_ID_ITEM_MORNING_STAR,
	MISC_SPRITE_ID_ITEM_SMALLHEART,
	MISC_SPRITE_ID_ITEM_WATER,
	MISC_SPRITE_ID_ITEM_BIGHEART,
	MISC_SPRITE_ID_ITEM_DAGGER,
	MISC_SPRITE_ID_ITEM_HOLYWATER,
	MISC_SPRITE_ID_ITEM_HOLYCROSS,
	MISC_SPRITE_ID_ITEM_AXE,
	MISC_SPRITE_ID_ITEM_GOLDPOTION,
	MISC_SPRITE_ID_ITEM_STOPWATCH,



};

class SpriteManager
{
	Sprite** sprites;
	int nSprite;
	static SpriteManager* instance;
public:
	static SpriteManager* getInstance();
	Sprite** getSprites();
	static Sprite* getSprite(SPRITE_INFO si);
	SpriteManager();
	~SpriteManager();
};

