#pragma once
#include "Renderer.h"
#include "Animation.h"

//렌더러를 상속받는 ANimationRenderer입니다
//애니메이션을 사용하는 객체의 경우에 애니메이션 렌더러 객체를 생성하여 사용합니다.

class AnimationRenderer :
	public Renderer
{
public:
	AnimationRenderer();
	virtual ~AnimationRenderer();
public:
	int currentState;					//현재 출력중인 애니메이션의 state 값
	Animation* currentAnimation;		//현재 출력중인 애니메이션 객체의 포인터 주소
	std::vector<Animation*> animations;	//모든 애니메이션이 들어있는 벡터(배열 형태의 컨테이너)
public:
	void Render(ID2D1HwndRenderTarget& renderTarget, Transform& transform);
public:
	void ChangeAnimation(int state);			//애니메이션을 변경하고 싶을 경우 호출
	void PushBackAnimation(Animation* anim);	//새로운 애니메이션을 등록하고 싶을 경우 호출
	Animation* FindAnimationByState(int state);	//state값을 입력받아 해당 Animation을 반환합니다, 존재하지 않을 경우 nullptr을 반환합니다.
};

