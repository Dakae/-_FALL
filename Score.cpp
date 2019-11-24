#include "stdafx.h"
#include "Score.h"

Score::Score()
	:GameObject(fontRenderer = new FontRenderer()), str(L"0")
{
	font = new Font(L"Arial");						//��Ʈ, ���� ���� ���ϴ� Font Ŭ���� ����(Font.h ����), �⺻ ũ�� 20pt
	fontRenderer->font = this->font;				//�ؽ�Ʈ�� �Ӽ��� �������ݴϴ�.
	fontRenderer->text = str;						//�ؽ�Ʈ�� ������ �������ݴϴ�.
	transform->SetPosition(300.0f, 300.0f);			//��ġ ����
	transform->SetRotation(30.0f);					//���� ����
	transform->SetScale(3.0f, 1.0f);				//ũ�� ���� ��� �����մϴ�.
}

Score::~Score()
{
	SAFE_DELETE(font);
}
