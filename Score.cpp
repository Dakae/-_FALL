#include "stdafx.h"
#include "Score.h"

Score::Score()
	:GameObject(fontRenderer = new FontRenderer()), str(L"0")
{
	font = new Font(L"Arial");						//��Ʈ, ���� ���� ���ϴ� Font Ŭ���� ����(Font.h ����), �⺻ ũ�� 20pt
	fontRenderer->font = this->font;				//�ؽ�Ʈ�� �Ӽ��� �������ݴϴ�.
	fontRenderer->text = str;						//�ؽ�Ʈ�� ������ �������ݴϴ�.
	transform->SetPosition(500.0f, 10.0f);			//��ġ ����
	transform->SetRotation(0.0f);					//���� ����
	transform->SetScale(5.0f, 3.0f);				//ũ�� ���� ��� �����մϴ�.

	score = 0;
}

Score::~Score()
{
	SAFE_DELETE(font);
}
