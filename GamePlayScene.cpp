#include "stdafx.h"
#include "GamePlayScene.h"
#include "BarManager.h"

#include "GameEndScene.h"


void GamePlayScene::Initialize()
{
	background1 = PushBackGameObject(new GameObject(L"resources/background/background2.png"));
	background1->transform->SetPosition(300.0f, 400.0f);
	background2 = PushBackGameObject(new GameObject(L"resources/background/background2.png"));
	background2->transform->SetPosition(300.0f, 1200.0f);
	

	BarManager *bm = (BarManager*)PushBackGameObject(new BarManager());
	player = (Player*)PushBackGameObject(new Player(L"resources/player/Player.png",bm));

	font_score = (Score*)PushBackGameObject(new Score());

	font_score->score = new int(/*-1*/6);

	player->backgound1 = background1;
	player->backgound2 = background2;
	player->font_score = font_score;
	player->score = font_score->score;
}
