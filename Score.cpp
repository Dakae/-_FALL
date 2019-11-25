#include "stdafx.h"
#include "Score.h"

Score::Score()
	:GameObject(fontRenderer = new FontRenderer()), str(L"0")
{
	font = new Font(L"Arial");						//폰트, 색상 등을 지니는 Font 클래스 생성(Font.h 참고), 기본 크기 20pt
	fontRenderer->font = this->font;				//텍스트의 속성을 지정해줍니다.
	fontRenderer->text = str;						//텍스트의 내용을 지정해줍니다.
	transform->SetPosition(500.0f, 10.0f);			//위치 지정
	transform->SetRotation(0.0f);					//각도 지정
	transform->SetScale(5.0f, 3.0f);				//크기 지정 모두 가능합니다.

	score = 0;
}

Score::~Score()
{
	SAFE_DELETE(font);
}
