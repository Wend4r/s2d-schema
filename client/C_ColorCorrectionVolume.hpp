#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf58
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
	float m_LastEnterWeight; // 0xd30	
	float m_LastEnterTime; // 0xd34	
	float m_LastExitWeight; // 0xd38	
	float m_LastExitTime; // 0xd3c	
	// MNetworkEnable
	bool m_bEnabled; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d41[0x3]; // 0xd41
public:
	// MNetworkEnable
	float m_MaxWeight; // 0xd44	
	// MNetworkEnable
	float m_FadeDuration; // 0xd48	
	// MNetworkEnable
	float m_Weight; // 0xd4c	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0xd50	
};

