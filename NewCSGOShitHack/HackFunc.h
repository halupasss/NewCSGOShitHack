#pragma once
#include "Vector.h"

DWORD GetBestTarget();

Vec3 calcAngle(Vec3 lp, Vec3 ep);

Vec3 normalizeAngles(float x, float y);

Vec3 CalcSmoothAngle(Vec3 src, Vec3 dst);

Vec3 GetSmoothAngle(Vec3 dest, Vec3 orig);

extern LPD3DXFONT m_font;
extern IDirect3DTexture9* tImage;

namespace DXLines
{
	extern ID3DXLine* Line;
	extern ID3DXLine* p_Line;

	extern ID3DXLine* BodyLine;
	extern ID3DXLine* rLegLine;
	extern ID3DXLine* lLegLine;
	extern ID3DXLine* rArmLine;
	extern ID3DXLine* lArmLine;
}

static struct HACK
{
	void MainThread();

	void BhopThread();

	void NeonESPThread();

	void TriggerBotThread();

	void AimBotThread();

	void RecoilControlSystemThread();

	void RadarHackThread();

	void NoFlashThread();

	void AimingAssistanceThread();

	void SpinBotThread(int speed);

	void ESPDrawBonesThread();

	void SetCustomImGuiStyle();

	void SetFov(const int nFov);

	void MenuThread();

	void InitLines(LPDIRECT3DDEVICE9& pDevice);

	void PlayerSetTPS(bool arg);

	void DXESPThread();

	void DrawMessage(LPD3DXFONT& font, unsigned int x, unsigned int y, D3DCOLOR color, LPCSTR Message);

	void LoadImageToDll(BYTE* Image, LPDIRECT3DDEVICE9& pDevice);

	void DrawBones(ID3DXLine* Line, DWORD Entity, std::vector<int> Bones, float thickness);

	void DrawRect(int x, int y, int w, int h, D3DCOLOR color, LPDIRECT3DDEVICE9& pDevice);

	void DrawBox(float x, float y, float w, float h, float px, D3DCOLOR color);

	void DrawLine(ID3DXLine* Line, float x1, float y1, float x2, float y2, float width, bool antialias, D3DCOLOR color);
} Hack;
