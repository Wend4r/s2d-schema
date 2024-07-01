#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CPointAngleSensor : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x7]; // 0x4b9
public:
	CUtlSymbolLarge m_nLookAtName; // 0x4c0	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4c8	
	CHandle< CBaseEntity > m_hLookAtEntity; // 0x4cc	
	float m_flDuration; // 0x4d0	
	float m_flDotTolerance; // 0x4d4	
	GameTime_t m_flFacingTime; // 0x4d8	
	bool m_bFired; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	CEntityIOOutput m_OnFacingLookat; // 0x4e0	
	CEntityIOOutput m_OnNotFacingLookat; // 0x508	
	CEntityOutputTemplate< Vector > m_TargetDir; // 0x530	
	CEntityOutputTemplate< float32 > m_FacingPercentage; // 0x558	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTest; // 0x0
	// CUtlSymbolLarge InputSetTargetEntity; // 0x0
	// float tolerance; // 0x7fffffff
};

