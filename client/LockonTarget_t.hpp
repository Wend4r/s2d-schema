#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "float m_flLatchedValue"
// MNetworkVarNames "GameTime_t m_flLatchedTime"
// MNetworkVarNames "ELockonState m_eLockonState"
// MNetworkVarNames "EHANDLE m_hTarget"
struct LockonTarget_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	float m_flGainRate; // 0x30	
	float m_flDrainRate; // 0x34	
	float m_flMaxValue; // 0x38	
	int32_t m_nPrevFullStacks; // 0x3c	
	// MNetworkEnable
	float m_flLatchedValue; // 0x40	
	// MNetworkEnable
	GameTime_t m_flLatchedTime; // 0x44	
	// MNetworkEnable
	ELockonState m_eLockonState; // 0x48	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0x4c	
};

