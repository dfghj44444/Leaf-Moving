// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�:
#include <windows.h>

// C ����ʱͷ�ļ�
#include <assert.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <malloc.h>
#include <io.h>
#include <fcntl.h>
#include  <mmsystem.h>

// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�


//STLͷ�ļ�
#include <list>
#include <vector>

#include  <mmsystem.h>

// DXͷ�ļ�
#include  <d3d9.h>
#include  <d3dx9.h>
#include  <dinput.h>
//#include  <dsound.h>

//DX���ļ�
#pragma comment (lib,"winmm.lib");
#pragma comment (lib, "d3d9.lib");
#pragma comment (lib, "d3dx9.lib");
#pragma comment (lib, "dxguid.lib");
#pragma comment (lib, "dxerr.lib");
#pragma comment (lib, "dinput8.lib");
//#pragma comment (lib, "dsound.lib");

//����������ʼ��
#define OFF_LEFT 93
#define OFF_TOP 43
#define PIC_WIDTH 30
#define PIC_HEIGHT 30

//�������̵�ͷ�ļ�
#include "../PublicLib/PublicLib.h"


//�����̵�ͷ�ļ�
#include "XM_ini.h"
#include "XM_sprite.h"
#include "XM_MainRole.h"

