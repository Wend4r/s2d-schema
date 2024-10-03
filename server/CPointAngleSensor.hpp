#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a8
// Has VTable
class CPointAngleSensor : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x7]; // 0x4e1
public:
	CUtlSymbolLarge m_nLookAtName; // 0x4e8	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4f0	
	CHandle< CBaseEntity > m_hLookAtEntity; // 0x4f4	
	float m_flDuration; // 0x4f8	
	float m_flDotTolerance; // 0x4fc	
	GameTime_t m_flFacingTime; // 0x500	
	bool m_bFired; // 0x504	
private:
	[[maybe_unused]] uint8_t __pad0505[0x3]; // 0x505
public:
	CEntityIOOutput m_OnFacingLookat; // 0x508	
	CEntityIOOutput m_OnNotFacingLookat; // 0x530	
	CEntityOutputTemplate< Vector > m_TargetDir; // 0x558	
	CEntityOutputTemplate< float32 > m_FacingPercentage; // 0x580	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTest; // 0x0
	// CUtlSymbolLarge InputSetTargetEntity; // 0x0
	// float tolerance; // 0x7fffffff
};

