#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "float32 m_MaxWeight"
// MNetworkVarNames "float32 m_FadeDuration"
// MNetworkVarNames "float32 m_Weight"
// MNetworkVarNames "char m_lookupFilename"
class CColorCorrectionVolume : public CBaseTrigger
{
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0961[0x3]; // 0x961
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x964	
	// MNetworkEnable
	float m_FadeDuration; // 0x968	
	bool m_bStartDisabled; // 0x96c	
private:
	[[maybe_unused]] uint8_t __pad096d[0x3]; // 0x96d
public:
	// MNetworkEnable
	float m_Weight; // 0x970	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x974	
	float m_LastEnterWeight; // 0xb74	
	GameTime_t m_LastEnterTime; // 0xb78	
	float m_LastExitWeight; // 0xb7c	
	GameTime_t m_LastExitTime; // 0xb80	
	
	// Datamap fields:
	// void CColorCorrectionVolumeThinkFunc; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

