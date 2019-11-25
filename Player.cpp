#include "stdafx.h"
#include "Player.h"
#include <cstdlib>
#include <ctime>
#include "InputManager.h"
#include "GameEndScene.h"
#include "DataManager.h"

#define PI 3.141592f

Player::Player(const wchar_t* path, BarManager* bm) :GameObject(path), bm(bm), col(*transform, Vector2(50, 70))
{
	transform->SetPosition(300.0f, 300.0f);
	moveSpeed = 10.0f;
	gameSpeed = 5.0f;
	oldgameSpeed = 5.0f;
	timer = 0.0f;
	delay = 2.0f;


	srand((unsigned int)time(NULL));

}

void Player::Update()
{
	//키 입력받기
	//InputManager::GetMyKeyState(키값), 0보다 클 경우: 눌림, 0: 눌리지 않음, -1: 키를 방금 막 떼었음
	/*if (InputManager::GetMyKeyState(VK_UP))
		transform->position.y -= moveSpeed;
	if (InputManager::GetMyKeyState(VK_DOWN))
		transform->position.y += moveSpeed;*/
	if (InputManager::GetMyKeyState(VK_RIGHT))
		transform->position.x += moveSpeed;
	if (InputManager::GetMyKeyState(VK_LEFT))
		transform->position.x -= moveSpeed;

	//std::cout << "(x,y) : " << transform->position.x << ", " << transform->position.y << std::endl;

	if (transform->position.x < 110) transform->position.x = 110;
	if (transform->position.x > 490) transform->position.x = 490;
	if (transform->position.y < 40) transform->position.y = 40;
	if (transform->position.y > 760) transform->position.y = 760;


	//속력 만들면 400-속력 으로 변경 ===> 해결
	if (backgound1->transform->position.y < -400 + gameSpeed)
	{
		backgound1->transform->position.y = 1200;
	}
	if (backgound2->transform->position.y < -400 + gameSpeed)
	{
		backgound2->transform->position.y = 1200;
	}
	backgound1->transform->position.y -= oldgameSpeed;
	backgound2->transform->position.y -= oldgameSpeed;



	if (timer>delay)
	{
		MakeBar();
		timer = 0;
		ScoreCount();
		DifficultyUpdate();
	}
	timer += TimeManager::GetDeltaTime();
}

void Player::LateUpdate()
{
	static int count = 0;
	for (auto& i : bm->barlist)
	{
		if (col.Intersected(i->col)) {
			//i->Destroy();
			//bm->Destroy(i);
			printf("아야%d\n", count++);
			Sleep(1000);
			DataManager::score = *score;
			Scene::ChangeScene(new GameEndScene());
		}
	}
	oldgameSpeed = gameSpeed;
}

void Player::MakeBar()
{
	float x = (rand() % 280 -140)*1.0f;//
	Bar* bar1 = bm->PushBackBar(new Bar(L"resources/enemy/bar.png", gameSpeed*60.0f, 0.0f, 0.75f, 0.00f));
	Bar* bar2 = bm->PushBackBar(new Bar(L"resources/enemy/bar.png", gameSpeed*60.0f, 0.0f, 0.75f, 0.00f));
	bar1->transform->SetPosition(x, 900.0f);
	bar2->transform->SetPosition(x+440+160, 900.0f);
}

void Player::ScoreCount() {
	*score += 1;
	_itow_s(*score,str,100,10);
	font_score->fontRenderer->text = str;
}

void Player::DifficultyUpdate()
{
	if (*score%11==10)
	{
		gameSpeed *= 1.5f;

		delay *= 0.8f;
	}
	for (auto& i : bm->barlist)
	{
		i->speed = gameSpeed * 60.0f;
	}
}
