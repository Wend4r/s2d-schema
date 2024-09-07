#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b8
// Has VTable
class CMathRemap : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4d8	
	float m_flInMax; // 0x4dc	
	float m_flOut1; // 0x4e0	
	float m_flOut2; // 0x4e4	
	float m_flOldInValue; // 0x4e8	
	bool m_bEnabled; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04ed[0x3]; // 0x4ed
public:
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4f0	
	CEntityIOOutput m_OnRoseAboveMin; // 0x518	
	CEntityIOOutput m_OnRoseAboveMax; // 0x540	
	CEntityIOOutput m_OnFellBelowMin; // 0x568	
	CEntityIOOutput m_OnFellBelowMax; // 0x590	
	
	// Datamap fields:
	// float InputValue; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

