#include "Game.h"
#include"KEY.h"
#include"Player.h"

Game::Game(void)
{
}
Game* Game::instance = 0;

Game* Game::getInstance()
{
	if (instance == 0)
		instance = new Game();
	return instance;
}

Stage * Game::currentStage()
{
	return stages[currentStageIndex];
}

void Game::nextStage()
{
	currentStageIndex++;
	Camera::getInstance()->setCameraLimit(currentStage());
	//Camera::getInstance()->set(0, 222, BACKBUFFER_WIDTH, BACKBUFFER_HEIGHT);
}

void Game::init()
{
	//Camera::getInstance()->set(0, 190, 256, 190);

	Player::getInstance()->set(getGlobalValue("player_x"),
		getGlobalValue("player_y"),
		getGlobalValue("player_width"),
		getGlobalValue("player_height")
	);

	Camera::getInstance()->set(getGlobalValue("camera_x"), 
		getGlobalValue("camera_y"), 
		getGlobalValue("backbuffer_width"), 
		getGlobalValue("backbuffer_height"));
	Camera::getInstance()->setPlayer(Player::getInstance());
	stages = new Stage*[2];
	stages[0] = new Stage();
	//stages[0]->init(
	//	"data/worlds/stage10/tilesheet.png",
	//	"data/worlds/stage10/matrix.dat",
	//	"data/worlds/stage10/objects.dat",
	//	"data/worlds/stage10/quadtree.dat",
	//	"data/worlds/stage10/collision_type_collides.dat"
	//	);
	stages[0]->init(
		"Data/Worlds/Level1/tilesheet.png",
		"Data/Worlds/Level1/matrix.dat",
		"Data/Worlds/Level1/objects.dat",
		"Data/Worlds/Level1/quadtree.dat",
		"Data/Worlds/Level1/collision_type_collides.dat",
		"Data/Worlds/Level1/areas.dat"

		//"Data/Worlds/Stage02/tilesheet.png",
		//"Data/Worlds/Stage02/matrix.dat",
		//"Data/Worlds/Stage02/objects.dat",
		//"Data/Worlds/Stage02/quadtree.dat",
		//"Data/Worlds/Stage02/collision_type_collides.dat",
		//"Data/Worlds/Stage02/camera_location.dat"
	);
	stages[0]->setPlayer(Player::getInstance());
	stages[0]->changeArea(0);
	stages[0]->resetCameraAndPlayerLocation();

	//stages[1] = new World();
	//stages[1]->init(
	//	"Data/Worlds/Stage12/tilesheet.png",
	//	"Data/Worlds/Stage12/matrix.dat",
	//	"Data/Worlds/Stage12/objects.dat",
	//	"Data/Worlds/Stage12/quadtree.dat",
	//	"Data/Worlds/Stage12/collision_type_collides.dat"
	//);


	//Camera::getInstance()->setCameraLimit(currentStage());
	//currentStage()->resetCameraAndPlayerLocation();
}

void Game::update(float dt)
{
	currentStage()->update(dt);
}
void Game::render()
{
	currentStage()->render();
}


Game::~Game(void)
{
}