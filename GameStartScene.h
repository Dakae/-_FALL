#pragma once
#include "Scene.h"
class GameStartScene :
	public Scene
{
public:
	
	GameObject* background;

	virtual void Initialize();
};

