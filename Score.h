#pragma once
#include "GameObject.h"
#include "FontRenderer.h"
class Score :
	public GameObject
{
public:
	Score();
	~Score();

	int *score;

	Font* font;						//자세한 설명은 Font.h 참고
	FontRenderer* fontRenderer;		//자세한 설명은 FontRenderer.h 참고
	wchar_t str[100];
};

