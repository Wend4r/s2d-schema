#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
class CMathRemap : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4b8	
	float m_flInMax; // 0x4bc	
	float m_flOut1; // 0x4c0	
	float m_flOut2; // 0x4c4	
	float m_flOldInValue; // 0x4c8	
	bool m_bEnabled; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04cd[0x3]; // 0x4cd
public:
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4d0	
	CEntityIOOutput m_OnRoseAboveMin; // 0x4f8	
	CEntityIOOutput m_OnRoseAboveMax; // 0x520	
	CEntityIOOutput m_OnFellBelowMin; // 0x548	
	CEntityIOOutput m_OnFellBelowMax; // 0x570	
	
	// Datamap fields:
	// float InputValue; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

