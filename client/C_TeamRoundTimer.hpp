#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
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
	bool m_bTimerPaused; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
public:
	// MNetworkEnable
	float m_flTimeRemaining; // 0x56c	
	// MNetworkEnable
	GameTime_t m_flTimerEndTime; // 0x570	
	// MNetworkEnable
	bool m_bIsDisabled; // 0x574	
	// MNetworkEnable
	bool m_bShowInHUD; // 0x575	
private:
	[[maybe_unused]] uint8_t __pad0576[0x2]; // 0x576
public:
	// MNetworkEnable
	int32_t m_nTimerLength; // 0x578	
	// MNetworkEnable
	int32_t m_nTimerInitialLength; // 0x57c	
	// MNetworkEnable
	int32_t m_nTimerMaxLength; // 0x580	
	// MNetworkEnable
	bool m_bAutoCountdown; // 0x584	
private:
	[[maybe_unused]] uint8_t __pad0585[0x3]; // 0x585
public:
	// MNetworkEnable
	int32_t m_nSetupTimeLength; // 0x588	
	// MNetworkEnable
	int32_t m_nState; // 0x58c	
	// MNetworkEnable
	bool m_bStartPaused; // 0x590	
	// MNetworkEnable
	bool m_bInCaptureWatchState; // 0x591	
private:
	[[maybe_unused]] uint8_t __pad0592[0x2]; // 0x592
public:
	// MNetworkEnable
	float m_flTotalTime; // 0x594	
	// MNetworkEnable
	bool m_bStopWatchTimer; // 0x598	
	bool m_bFireFinished; // 0x599	
	bool m_bFire5MinRemain; // 0x59a	
	bool m_bFire4MinRemain; // 0x59b	
	bool m_bFire3MinRemain; // 0x59c	
	bool m_bFire2MinRemain; // 0x59d	
	bool m_bFire1MinRemain; // 0x59e	
	bool m_bFire30SecRemain; // 0x59f	
	bool m_bFire10SecRemain; // 0x5a0	
	bool m_bFire5SecRemain; // 0x5a1	
	bool m_bFire4SecRemain; // 0x5a2	
	bool m_bFire3SecRemain; // 0x5a3	
	bool m_bFire2SecRemain; // 0x5a4	
	bool m_bFire1SecRemain; // 0x5a5	
private:
	[[maybe_unused]] uint8_t __pad05a6[0x2]; // 0x5a6
public:
	int32_t m_nOldTimerLength; // 0x5a8	
	int32_t m_nOldTimerState; // 0x5ac	
};

