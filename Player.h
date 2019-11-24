#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
#include "BarManager.h"
#include "TimeManager.h"
class Player :
	public GameObject
{
public:
	float moveSpeed;
	float gameSpeed;
	int score;

	AABBCollider col;	//충돌

	BarManager *bm;

	GameObject *backgound1;
	GameObject *backgound2;

	float timer;
	float delay;

	Player(const wchar_t* path,BarManager* bm);					//Player생성자
	virtual void Update();		//Update: 매 프레임 호출됩니다.
	virtual void LateUpdate();	//LateUpdate: 매 프레임 Update, Render가 실행된 이후 호출됩니다.

	void MakeBar();
};

