#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
#include "BarManager.h"
#include "TimeManager.h"
#include "Score.h"
class Player :
	public GameObject
{
public:
	float moveSpeed;
	float gameSpeed;
	float oldgameSpeed;
	int *score;
	wchar_t str[100];

	AABBCollider col;	//충돌

	BarManager *bm;

	GameObject *backgound1;
	GameObject *backgound2;

	Score *font_score;

	float timer;
	float delay;

	Player(const wchar_t* path,BarManager* bm);					//Player생성자
	virtual void Update();		//Update: 매 프레임 호출됩니다.
	virtual void LateUpdate();	//LateUpdate: 매 프레임 Update, Render가 실행된 이후 호출됩니다.

	void MakeBar();
	void ScoreCount();
	void DifficultyUpdate();
};

