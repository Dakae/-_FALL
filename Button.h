#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
class Button :
	public GameObject
{
public:

	AABBCollider col;

	char mod;

	Button(const wchar_t* path, char mod);					//Player생성자
	virtual void Update();		//Update: 매 프레임 호출됩니다.
	virtual void LateUpdate();	//LateUpdate: 매 프레임 Update, Render가 실행된 이후 호출됩니다.
};

