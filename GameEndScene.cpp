#include "stdafx.h"
#include "GameEndScene.h"
#include "DataManager.h"
#include "Button.h"
#include <cstdlib>


GameEndScene::GameEndScene()
{
	_itow_s(DataManager::score,str,100,10);
}

void GameEndScene::Initialize()
{
	background = PushBackGameObject(new GameObject(L"resources/background/background3.png"));
	background->transform->SetPosition(300.0f, 400.0f);

	score = (Score*)PushBackGameObject(new Score());
	score->transform->SetPosition(300.0f, 300.0f);
	score->fontRenderer->text = str;

	PushBackGameObject(new Button(L"", 'R'));
}