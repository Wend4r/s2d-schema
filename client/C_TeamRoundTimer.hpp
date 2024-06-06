#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
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
	bool m_bTimerPaused; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	float m_flTimeRemaining; // 0x54c	
	// MNetworkEnable
	GameTime_t m_flTimerEndTime; // 0x550	
	// MNetworkEnable
	bool m_bIsDisabled; // 0x554	
	// MNetworkEnable
	bool m_bShowInHUD; // 0x555	
private:
	[[maybe_unused]] uint8_t __pad0556[0x2]; // 0x556
public:
	// MNetworkEnable
	int32_t m_nTimerLength; // 0x558	
	// MNetworkEnable
	int32_t m_nTimerInitialLength; // 0x55c	
	// MNetworkEnable
	int32_t m_nTimerMaxLength; // 0x560	
	// MNetworkEnable
	bool m_bAutoCountdown; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	// MNetworkEnable
	int32_t m_nSetupTimeLength; // 0x568	
	// MNetworkEnable
	int32_t m_nState; // 0x56c	
	// MNetworkEnable
	bool m_bStartPaused; // 0x570	
	// MNetworkEnable
	bool m_bInCaptureWatchState; // 0x571	
private:
	[[maybe_unused]] uint8_t __pad0572[0x2]; // 0x572
public:
	// MNetworkEnable
	float m_flTotalTime; // 0x574	
	// MNetworkEnable
	bool m_bStopWatchTimer; // 0x578	
	bool m_bFireFinished; // 0x579	
	bool m_bFire5MinRemain; // 0x57a	
	bool m_bFire4MinRemain; // 0x57b	
	bool m_bFire3MinRemain; // 0x57c	
	bool m_bFire2MinRemain; // 0x57d	
	bool m_bFire1MinRemain; // 0x57e	
	bool m_bFire30SecRemain; // 0x57f	
	bool m_bFire10SecRemain; // 0x580	
	bool m_bFire5SecRemain; // 0x581	
	bool m_bFire4SecRemain; // 0x582	
	bool m_bFire3SecRemain; // 0x583	
	bool m_bFire2SecRemain; // 0x584	
	bool m_bFire1SecRemain; // 0x585	
private:
	[[maybe_unused]] uint8_t __pad0586[0x2]; // 0x586
public:
	int32_t m_nOldTimerLength; // 0x588	
	int32_t m_nOldTimerState; // 0x58c	
};

