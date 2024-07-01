#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "bool m_bTimerPaused"
// MNetworkVarNames "float m_flTimeRemaining"
// MNetworkVarNames "GameTime_t m_flTimerEndTime"
// MNetworkVarNames "bool m_bIsDisabled"
// MNetworkVarNames "bool m_bShowInHUD"
// MNetworkVarNames "int m_nTimerLength"
// MNetworkVarNames "int m_nTimerInitialLength"
// MNetworkVarNames "int m_nTimerMaxLength"
// MNetworkVarNames "bool m_bAutoCountdown"
// MNetworkVarNames "int m_nSetupTimeLength"
// MNetworkVarNames "int m_nState"
// MNetworkVarNames "bool m_bStartPaused"
// MNetworkVarNames "bool m_bInCaptureWatchState"
// MNetworkVarNames "float m_flTotalTime"
// MNetworkVarNames "bool m_bStopWatchTimer"
class C_TeamRoundTimer : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTimerPaused"
	bool m_bTimerPaused; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	// MNetworkEnable
	float m_flTimeRemaining; // 0x53c	
	// MNetworkEnable
	GameTime_t m_flTimerEndTime; // 0x540	
	// MNetworkEnable
	bool m_bIsDisabled; // 0x544	
	// MNetworkEnable
	bool m_bShowInHUD; // 0x545	
private:
	[[maybe_unused]] uint8_t __pad0546[0x2]; // 0x546
public:
	// MNetworkEnable
	int32_t m_nTimerLength; // 0x548	
	// MNetworkEnable
	int32_t m_nTimerInitialLength; // 0x54c	
	// MNetworkEnable
	int32_t m_nTimerMaxLength; // 0x550	
	// MNetworkEnable
	bool m_bAutoCountdown; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	// MNetworkEnable
	int32_t m_nSetupTimeLength; // 0x558	
	// MNetworkEnable
	int32_t m_nState; // 0x55c	
	// MNetworkEnable
	bool m_bStartPaused; // 0x560	
	// MNetworkEnable
	bool m_bInCaptureWatchState; // 0x561	
private:
	[[maybe_unused]] uint8_t __pad0562[0x2]; // 0x562
public:
	// MNetworkEnable
	float m_flTotalTime; // 0x564	
	// MNetworkEnable
	bool m_bStopWatchTimer; // 0x568	
	bool m_bFireFinished; // 0x569	
	bool m_bFire5MinRemain; // 0x56a	
	bool m_bFire4MinRemain; // 0x56b	
	bool m_bFire3MinRemain; // 0x56c	
	bool m_bFire2MinRemain; // 0x56d	
	bool m_bFire1MinRemain; // 0x56e	
	bool m_bFire30SecRemain; // 0x56f	
	bool m_bFire10SecRemain; // 0x570	
	bool m_bFire5SecRemain; // 0x571	
	bool m_bFire4SecRemain; // 0x572	
	bool m_bFire3SecRemain; // 0x573	
	bool m_bFire2SecRemain; // 0x574	
	bool m_bFire1SecRemain; // 0x575	
private:
	[[maybe_unused]] uint8_t __pad0576[0x2]; // 0x576
public:
	int32_t m_nOldTimerLength; // 0x578	
	int32_t m_nOldTimerState; // 0x57c	
};

