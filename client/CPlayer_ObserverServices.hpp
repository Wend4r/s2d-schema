#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "uint8 m_iObserverMode"
// MNetworkVarNames "CHandle< CBaseEntity> m_hObserverTarget"
class CPlayer_ObserverServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverModeChanged"
	uint8_t m_iObserverMode; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverTargetChanged"
	CHandle< C_BaseEntity > m_hObserverTarget; // 0x44	
	ObserverMode_t m_iObserverLastMode; // 0x48	
	bool m_bForcedObserverMode; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	float m_flObserverChaseDistance; // 0x50	
	GameTime_t m_flObserverChaseDistanceCalcTime; // 0x54	
};

