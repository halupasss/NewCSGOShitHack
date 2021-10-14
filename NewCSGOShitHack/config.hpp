#pragma once

namespace config
{
	extern int FOV;
	extern int SmoothStep;
	extern int SpinBotSpeed;
	extern int TargetBonePos;

	extern bool console;
	extern bool ImGui_Init;
	extern bool ImGui_Attached;
	extern bool AimBotActive;
	extern bool MenuActive;

	extern bool Bhop;
	extern bool HealthTreshold;
	extern bool TriggerBot;
	extern bool NeonWallHack;
	extern bool AimBot;
	extern bool RecoilControlSystem;
	extern bool RadarHack;
	extern bool NoFlash;
	extern bool WallHackESP;
	extern bool SpinBot;
	extern bool AimingAssistance;
	extern bool SmoothAimBot;
	extern bool ThirdPersonView;
	extern bool TPSActive;
	extern bool AimLegitMode;
	extern bool TriggerBotInAimBot;

	extern int HealthTresholdVal;
	extern int BhopDelay;
	extern int TriggerBotCooldown;
	extern int MainThreadDelay;
	extern int SilentAimSmooth;
	extern int LegitAimBotDiff;

	extern int BoxWidth;
	extern int LineWidth;

	extern float LT_NEONESP[3];
	extern float ET_NEONESP[3];

	extern float DX_ESP[3];
}

extern int AimBotHotKey;   // VK_ALT
extern int EndHotKey;     // VK_END
extern int MenuHotKey;   // VK_HOME

static struct CONFIG
{
	bool console = false;
	bool ImGui_Init = false;
	bool ImGui_Attached = false;
	bool AimBotActive = false;
	bool MenuActive = false;
	bool HealthTreshold = false;

	int HealthTresholdVal = 33;
	int BhopDelay = 17;
	int TriggerBotCooldown = 65;
	int MainThreadDelay = 1;

	int AimBotHotKey = 18;   // VK_ALT
	int EndHotKey = 0x23;   // VK_END
	int MenuHotKey = 0x24; // VK_HOME

	float LT_NEONESP[3] = { 0, 1, 1 };
	float ET_NEONESP[3] = { 1, 0, 1 };

	float DX_ESP[3] = { 1, 0, 1 };
} Config;