#pragma once
#include "Scene.h"
#include "Score.h"
class GameEndScene :
	public Scene
{
public:
	GameEndScene();
	GameObject* background;

	int *num;
	wchar_t str[100];
	Score* score;

	virtual void Initialize();
};

