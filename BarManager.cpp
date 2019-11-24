#include "stdafx.h"
#include "BarManager.h"
#include "Scene.h"

BarManager::BarManager()
{
}
BarManager::~BarManager()
{
}

Bar * BarManager::PushBackBar(Bar * b)
{
	Scene::GetCurrentScene().PushBackGameObject(b);
	barlist.push_back(b);
	return b;
}

void BarManager::LateUpdate()
{
	Remove();
}

void BarManager::Destroy(Bar * b)
{
	destroyed.push_back(b);
}

void BarManager::Remove()
{
	for (auto& i : destroyed)
	{
		i->Destroy();
		barlist.remove(i);
		Scene::GetCurrentScene().Destroy(i);
	}
	destroyed.clear();
}
