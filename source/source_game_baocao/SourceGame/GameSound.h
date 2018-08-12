#pragma once

#include "Sound.h"
#include<Windows.h>
#include <map>

using namespace std;

typedef map<string, Sound*> SoundMap;
typedef pair<string, Sound*> SoundPair;



class GameSound
{
public:
	static void initialize(HWND windowsHandler);


	void play(string soundLink, bool repeat = false, bool playFromStart = true);

	void Stop(int id);

	void stop(string soundLink);

	static GameSound* getInstance();

private:
	GameSound();
	~GameSound();

	//Sound _gameOver;
private:
	static GameSound* instance_;
	SoundMap loadedSound_;
};
