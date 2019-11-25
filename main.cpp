#include "stdafx.h"
#include "Framework.h"
#include "GameStartScene.h"
#include "GamePlayScene.h"
#include "Math.h"

int main()
{
	Framework& f = Framework::GetInstance();
	f.Run(new GameStartScene(), L"fall", 600, 800, false);
	return 0;
}