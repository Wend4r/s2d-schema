#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb08
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
	bool m_bEnabled; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08e1[0x3]; // 0x8e1
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x8e4	
	// MNetworkEnable
	float m_FadeDuration; // 0x8e8	
	bool m_bStartDisabled; // 0x8ec	
private:
	[[maybe_unused]] uint8_t __pad08ed[0x3]; // 0x8ed
public:
	// MNetworkEnable
	float m_Weight; // 0x8f0	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x8f4	
	float m_LastEnterWeight; // 0xaf4	
	GameTime_t m_LastEnterTime; // 0xaf8	
	float m_LastExitWeight; // 0xafc	
	GameTime_t m_LastExitTime; // 0xb00	
	
	// Datamap fields:
	// void CColorCorrectionVolumeThinkFunc; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

