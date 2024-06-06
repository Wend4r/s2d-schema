#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xef8
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
	float m_LastEnterWeight; // 0xcd0	
	float m_LastEnterTime; // 0xcd4	
	float m_LastExitWeight; // 0xcd8	
	float m_LastExitTime; // 0xcdc	
	// MNetworkEnable
	bool m_bEnabled; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce1[0x3]; // 0xce1
public:
	// MNetworkEnable
	float m_MaxWeight; // 0xce4	
	// MNetworkEnable
	float m_FadeDuration; // 0xce8	
	// MNetworkEnable
	float m_Weight; // 0xcec	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0xcf0	
};

