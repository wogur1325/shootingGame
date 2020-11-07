#include "Include.h"

void Bullet_Init()
{
	for (int i = 0; i < 100; i++)
	{
		g_Bullet.x[i] = 0;
		g_Bullet.y[i] = 0;
	}
	g_Bullet.body = '^';
	g_Bullet.fColor = GREEN;
	g_Bullet.bColor = BLACK;
	g_Bullet.speed = 10;
	g_Bullet.Alive = false;
	g_Bullet.num = 0;
}

void Bullet_Update()
{

	if (IsKey(VK_SPACE))
	{
		for (int i = 0; i < 100; i++)
		{

			if (g_Bullet.y[i] < 0)
			{
				g_Bullet.Alive = false;
			}

			if (!g_Bullet.Alive)
			{
				g_Bullet.x[i] = g_Hero.x;
				g_Bullet.y[i] = g_Hero.y - 1;
				g_Bullet.Alive = true;
				break;
			}
		}
	}
}

void Bullet_Draw()
{
	if (g_Bullet.Alive)
	{
		for (int i = 0; i < 100; i++)
		{
			DrawCharEx3(g_Bullet.x[i], g_Bullet.y[i], g_Bullet.body,
				g_Bullet.fColor, g_Bullet.bColor);
		}
	}

	if (g_Bullet.Alive == true)
	{
		for (int i = 0; i < 100; i++)
		{
			g_Bullet.y[i]--;
		}

	}
}