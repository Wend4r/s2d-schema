#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb48
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
	bool m_bEnabled; // 0x920	
private:
	[[maybe_unused]] uint8_t __pad0921[0x3]; // 0x921
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x924	
	// MNetworkEnable
	float m_FadeDuration; // 0x928	
	bool m_bStartDisabled; // 0x92c	
private:
	[[maybe_unused]] uint8_t __pad092d[0x3]; // 0x92d
public:
	// MNetworkEnable
	float m_Weight; // 0x930	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x934	
	float m_LastEnterWeight; // 0xb34	
	GameTime_t m_LastEnterTime; // 0xb38	
	float m_LastExitWeight; // 0xb3c	
	GameTime_t m_LastExitTime; // 0xb40	
	
	// Datamap fields:
	// void CColorCorrectionVolumeThinkFunc; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

