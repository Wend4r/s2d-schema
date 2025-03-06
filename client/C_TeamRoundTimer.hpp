#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
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
	bool m_bTimerPaused; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x3]; // 0x511
public:
	// MNetworkEnable
	float m_flTimeRemaining; // 0x514	
	// MNetworkEnable
	GameTime_t m_flTimerEndTime; // 0x518	
	// MNetworkEnable
	bool m_bIsDisabled; // 0x51c	
	// MNetworkEnable
	bool m_bShowInHUD; // 0x51d	
private:
	[[maybe_unused]] uint8_t __pad051e[0x2]; // 0x51e
public:
	// MNetworkEnable
	int32_t m_nTimerLength; // 0x520	
	// MNetworkEnable
	int32_t m_nTimerInitialLength; // 0x524	
	// MNetworkEnable
	int32_t m_nTimerMaxLength; // 0x528	
	// MNetworkEnable
	bool m_bAutoCountdown; // 0x52c	
private:
	[[maybe_unused]] uint8_t __pad052d[0x3]; // 0x52d
public:
	// MNetworkEnable
	int32_t m_nSetupTimeLength; // 0x530	
	// MNetworkEnable
	int32_t m_nState; // 0x534	
	// MNetworkEnable
	bool m_bStartPaused; // 0x538	
	// MNetworkEnable
	bool m_bInCaptureWatchState; // 0x539	
private:
	[[maybe_unused]] uint8_t __pad053a[0x2]; // 0x53a
public:
	// MNetworkEnable
	float m_flTotalTime; // 0x53c	
	// MNetworkEnable
	bool m_bStopWatchTimer; // 0x540	
	bool m_bFireFinished; // 0x541	
	bool m_bFire5MinRemain; // 0x542	
	bool m_bFire4MinRemain; // 0x543	
	bool m_bFire3MinRemain; // 0x544	
	bool m_bFire2MinRemain; // 0x545	
	bool m_bFire1MinRemain; // 0x546	
	bool m_bFire30SecRemain; // 0x547	
	bool m_bFire10SecRemain; // 0x548	
	bool m_bFire5SecRemain; // 0x549	
	bool m_bFire4SecRemain; // 0x54a	
	bool m_bFire3SecRemain; // 0x54b	
	bool m_bFire2SecRemain; // 0x54c	
	bool m_bFire1SecRemain; // 0x54d	
private:
	[[maybe_unused]] uint8_t __pad054e[0x2]; // 0x54e
public:
	int32_t m_nOldTimerLength; // 0x550	
	int32_t m_nOldTimerState; // 0x554	
};

