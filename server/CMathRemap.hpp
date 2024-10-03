#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class CMathRemap : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4e0	
	float m_flInMax; // 0x4e4	
	float m_flOut1; // 0x4e8	
	float m_flOut2; // 0x4ec	
	float m_flOldInValue; // 0x4f0	
	bool m_bEnabled; // 0x4f4	
private:
	[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
public:
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4f8	
	CEntityIOOutput m_OnRoseAboveMin; // 0x520	
	CEntityIOOutput m_OnRoseAboveMax; // 0x548	
	CEntityIOOutput m_OnFellBelowMin; // 0x570	
	CEntityIOOutput m_OnFellBelowMax; // 0x598	
	
	// Datamap fields:
	// float InputValue; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

