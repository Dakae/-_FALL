#include "stdafx.h"
#include "GameStartScene.h"
#include "Button.h"


void GameStartScene::Initialize()
{
	background = PushBackGameObject(new GameObject(L"resources/background/background1.png"));
	background->transform->SetPosition(300.0f, 400.0f);

	PushBackGameObject(new Button(L"", 'S'));
}