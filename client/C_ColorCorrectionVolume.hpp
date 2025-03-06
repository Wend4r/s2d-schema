#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb70
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
	float m_LastEnterWeight; // 0x948	
	GameTime_t m_LastEnterTime; // 0x94c	
	float m_LastExitWeight; // 0x950	
	GameTime_t m_LastExitTime; // 0x954	
	// MNetworkEnable
	bool m_bEnabled; // 0x958	
private:
	[[maybe_unused]] uint8_t __pad0959[0x3]; // 0x959
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x95c	
	// MNetworkEnable
	float m_FadeDuration; // 0x960	
	// MNetworkEnable
	float m_Weight; // 0x964	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x968	
};

