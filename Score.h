#pragma once
#include "GameObject.h"
#include "FontRenderer.h"
class Score :
	public GameObject
{
public:
	Score();
	~Score();

	Font* font;						//�ڼ��� ������ Font.h ����
	FontRenderer* fontRenderer;		//�ڼ��� ������ FontRenderer.h ����
	wchar_t str[100];
};

