#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa40
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "float m_MaxWeight"
// MNetworkVarNames "float m_FadeDuration"
// MNetworkVarNames "float m_Weight"
// MNetworkVarNames "char m_lookupFilename"
class C_ColorCorrectionVolume : public C_BaseTrigger
{
public:
	float m_LastEnterWeight; // 0x818	
	float m_LastEnterTime; // 0x81c	
	float m_LastExitWeight; // 0x820	
	float m_LastExitTime; // 0x824	
	// MNetworkEnable
	bool m_bEnabled; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0829[0x3]; // 0x829
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x82c	
	// MNetworkEnable
	float m_FadeDuration; // 0x830	
	// MNetworkEnable
	float m_Weight; // 0x834	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x838	
};

