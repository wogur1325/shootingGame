#pragma once

struct stBullet
{
	int x[100], y[100];
	char body;
	int speed;
	int Alive;
	int num;

	DWORD fColor; //from Color
	DWORD bColor; //background Color
};

void Bullet_Init();
void Bullet_Update();//��ó��
void Bullet_Draw();//�����׷��ֱ�