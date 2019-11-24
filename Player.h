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

	AABBCollider col;	//�浹

	BarManager *bm;

	GameObject *backgound1;
	GameObject *backgound2;

	float timer;
	float delay;

	Player(const wchar_t* path,BarManager* bm);					//Player������
	virtual void Update();		//Update: �� ������ ȣ��˴ϴ�.
	virtual void LateUpdate();	//LateUpdate: �� ������ Update, Render�� ����� ���� ȣ��˴ϴ�.

	void MakeBar();
};

