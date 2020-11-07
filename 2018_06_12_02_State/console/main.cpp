#include "Include.h"

// 헝가리안 표기법
// int    n이름
// char   c이름
// bool   b이름	
// DWORD  dw이름
// short  s이름
// long   l이름
// 구조체 맴버변수는 
// int m_n이름
// char  m_c이름
// 글로벌 g_?이름
// int nVlaue = 0;
// void Quit();

stHero g_Hero;
stBullet g_Bullet;

int main()
{
	InitialConsole();//초기화함수

	Hero_Init();
	Bullet_Init();

	SetWindowTitle("Shooting");
	while (true)
	{
		CheckInput();
		ClearScreenEx3(BLACK);

		Hero_Update();
		Hero_Draw();

		Bullet_Update();
		Bullet_Draw();
		

		Flip();
		EngineSync(30);
	}

	ReleaseConsole();
	return 0;
}
