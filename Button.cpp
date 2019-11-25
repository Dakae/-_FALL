#include "stdafx.h"
#include "Button.h"
#include "InputManager.h"
#include "GameStartScene.h"
#include "GamePlayScene.h"

Button::Button(const wchar_t * path, char mod) :GameObject(path), mod(mod) , col(*transform, Vector2(200, 100))
{

}

void Button::Update()
{
	if (mod == 'S')
	{
		transform->SetPosition(300.0f,500.0f);
		if (col.Intersected(InputManager::GetMouseVector2())&&InputManager::GetKeyUp(VK_LBUTTON))
		{
			Scene::ChangeScene(new GamePlayScene());
		}
	}
	if (mod == 'R')
	{
		transform->SetPosition(300.0f, 500.0f);
		if (col.Intersected(InputManager::GetMouseVector2()) && InputManager::GetKeyUp(VK_LBUTTON))
		{
			Scene::ChangeScene(new GameStartScene());
		}
	}
}

void Button::LateUpdate()
{
}
