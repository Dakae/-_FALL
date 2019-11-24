#include "stdafx.h"
#include "GameEndScene.h"

#include "GameStartScene.h"


void GameEndScene::Initialize()
{
	background = PushBackGameObject(new GameObject(L"resources/background/background3.png"));
	background->transform->SetPosition(300.0f, 400.0f);

}