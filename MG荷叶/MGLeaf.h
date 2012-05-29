#pragma once

#include "resource.h"
enum GAMESTATE
{
	K_EMPTY,
	K_GAMING,//��Ϸ��
	K_WIN,//��Ϸʤ���������յ�
	K_FINISH,//��Ϸʧ��
	K_COUNT
};
enum GAMESTAGE
{
	STAGE_1,
	STAGE_COUNT
};


// �˴���ģ���а����ĺ�����ǰ������:
ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);

HRESULT InitD3D();
HRESULT  InitDirectInput();
void CleanDirectInput();
void CleanD3D(void);
void MainLoop();
void RenderFrame();
void ExitGame();

void CheckMouse();
void GameReset();