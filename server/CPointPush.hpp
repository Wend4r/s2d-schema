#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CPointPush : public CPointEntity
{
public:
	bool m_bEnabled; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	float m_flMagnitude; // 0x4bc	
	float m_flRadius; // 0x4c0	
	float m_flInnerRadius; // 0x4c4	
	float m_flConeOfInfluence; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CUtlSymbolLarge m_iszFilterName; // 0x4d0	
	CHandle< CBaseFilter > m_hFilter; // 0x4d8	
	
	// Datamap fields:
	// void CPointPushPushThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

