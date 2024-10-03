#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf50
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
	float m_LastEnterWeight; // 0xd28	
	float m_LastEnterTime; // 0xd2c	
	float m_LastExitWeight; // 0xd30	
	float m_LastExitTime; // 0xd34	
	// MNetworkEnable
	bool m_bEnabled; // 0xd38	
private:
	[[maybe_unused]] uint8_t __pad0d39[0x3]; // 0xd39
public:
	// MNetworkEnable
	float m_MaxWeight; // 0xd3c	
	// MNetworkEnable
	float m_FadeDuration; // 0xd40	
	// MNetworkEnable
	float m_Weight; // 0xd44	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0xd48	
};

