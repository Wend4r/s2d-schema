#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb40
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
	bool m_bEnabled; // 0x918	
private:
	[[maybe_unused]] uint8_t __pad0919[0x3]; // 0x919
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x91c	
	// MNetworkEnable
	float m_FadeDuration; // 0x920	
	bool m_bStartDisabled; // 0x924	
private:
	[[maybe_unused]] uint8_t __pad0925[0x3]; // 0x925
public:
	// MNetworkEnable
	float m_Weight; // 0x928	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x92c	
	float m_LastEnterWeight; // 0xb2c	
	GameTime_t m_LastEnterTime; // 0xb30	
	float m_LastExitWeight; // 0xb34	
	GameTime_t m_LastExitTime; // 0xb38	
	
	// Datamap fields:
	// void CColorCorrectionVolumeThinkFunc; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

