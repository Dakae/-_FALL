#pragma once
#include "GameObject.h"
#include "Bar.h"
class BarManager :
	public GameObject
{
public:
	BarManager();
	~BarManager();

	std::list<Bar*> barlist;
	Bar* PushBackBar(Bar* b);
	void Destroy(Bar* b);
	virtual void LateUpdate();
private:
	std::list<Bar*> destroyed;
	void Remove();
};

