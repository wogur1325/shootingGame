#pragma once

struct stHero
{
    int x, y;
    char body;
    int speed;
    int attack;
    int hp;

    DWORD fColor; //from Color
    DWORD bColor; //background Color
};

void Hero_Init();
void Hero_Update();//��ó��
void Hero_Draw();//�����׷��ֱ�