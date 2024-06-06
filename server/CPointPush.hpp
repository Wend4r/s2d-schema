#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CPointPush : public CPointEntity
{
public:
	bool m_bEnabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_flMagnitude; // 0x4c4	
	float m_flRadius; // 0x4c8	
	float m_flInnerRadius; // 0x4cc	
	float m_flConeOfInfluence; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_iszFilterName; // 0x4d8	
	CHandle< CBaseFilter > m_hFilter; // 0x4e0	
	
	// Datamap fields:
	// void CPointPushPushThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

