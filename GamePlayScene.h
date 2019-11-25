#pragma once
#include "Scene.h"
#include "Player.h"
#include "Score.h"
class GamePlayScene :
	public Scene
{
public:
	GameObject* background1;
	GameObject* background2;

	virtual void Initialize();
	Player* player;

	Score* font_score;
};

