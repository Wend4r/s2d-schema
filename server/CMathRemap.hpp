#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CMathRemap : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4c0	
	float m_flInMax; // 0x4c4	
	float m_flOut1; // 0x4c8	
	float m_flOut2; // 0x4cc	
	float m_flOldInValue; // 0x4d0	
	bool m_bEnabled; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04d5[0x3]; // 0x4d5
public:
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4d8	
	CEntityIOOutput m_OnRoseAboveMin; // 0x500	
	CEntityIOOutput m_OnRoseAboveMax; // 0x528	
	CEntityIOOutput m_OnFellBelowMin; // 0x550	
	CEntityIOOutput m_OnFellBelowMax; // 0x578	
	
	// Datamap fields:
	// float InputValue; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

