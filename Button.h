#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
class Button :
	public GameObject
{
public:

	AABBCollider col;

	char mod;

	Button(const wchar_t* path, char mod);					//Player������
	virtual void Update();		//Update: �� ������ ȣ��˴ϴ�.
	virtual void LateUpdate();	//LateUpdate: �� ������ Update, Render�� ����� ���� ȣ��˴ϴ�.
};

