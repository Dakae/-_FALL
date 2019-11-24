#include "stdafx.h"
#include "Bar.h"
#include "TimeManager.h"
#define PI 3.141592f


Bar::Bar(const wchar_t* path, float speed, float speedRate, float angle, float angleRate)
	:GameObject(path), speed(speed), speedRate(speedRate), angle(angle), angleRate(angleRate), col(*transform, Vector2(440, 80))
{
}


Bar::~Bar()
{
}

void Bar::Update()
{
	Move();
}

void Bar::Move()
{
	//움직일 때 사용할 함수
	float rad = PI * angle* 2.0f;

	transform->position.x
		+= (speed*cosf(rad)
			*TimeManager::GetDeltaTime());
	transform->position.y
		+= (speed*sinf(rad)
			*TimeManager::GetDeltaTime());

	angle += angleRate;
	speed += speedRate;
}

void Bar::Destroy()
{
	
}

/*void Bar::move(float x, float y) {
	float distance_x = x - transform->position.x;//-300
	float distance_y = y - transform->position.y;//-500

	float inclination = distance_y / distance_x;


	while (transform->position.x<0)
	{
		transform->position.x += -1;
		transform->position.y = function(inclination, x, y, transform->position.x);
		printf("asdf");
	}
}

float Bar::function(float inclination, float x1, float y1, float x) {
	return inclination * (x - x1) + y1;
}*/