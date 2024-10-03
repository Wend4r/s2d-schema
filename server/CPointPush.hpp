#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPointPush : public CPointEntity
{
public:
	bool m_bEnabled; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	float m_flMagnitude; // 0x4e4	
	float m_flRadius; // 0x4e8	
	float m_flInnerRadius; // 0x4ec	
	float m_flConeOfInfluence; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CUtlSymbolLarge m_iszFilterName; // 0x4f8	
	CHandle< CBaseFilter > m_hFilter; // 0x500	
	
	// Datamap fields:
	// void CPointPushPushThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

