#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
class Bar :
	public GameObject
{
public:
	Bar(const wchar_t* path, float speed, float speedRate, float angle, float angleRate);
	~Bar();

	AABBCollider col;

	float speed;
	float speedRate;
	float angle;
	float angleRate;

	void Update();
	void Move();
	void Destroy();
	/*void move(float x, float y);
	float function(float inclination, float x1, float y1, float x);*/
};

