#pragma once
#include "Scene.h"
class GameEndScene :
	public Scene
{
public:
	GameObject* background;

	virtual void Initialize();
};

