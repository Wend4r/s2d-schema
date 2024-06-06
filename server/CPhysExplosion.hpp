#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CPhysExplosion : public CPointEntity
{
public:
	bool m_bExplodeOnSpawn; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_flMagnitude; // 0x4c4	
	float m_flDamage; // 0x4c8	
	float m_radius; // 0x4cc	
	CUtlSymbolLarge m_targetEntityName; // 0x4d0	
	float m_flInnerRadius; // 0x4d8	
	float m_flPushScale; // 0x4dc	
	bool m_bConvertToDebrisWhenPossible; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x7]; // 0x4e1
public:
	CEntityIOOutput m_OnPushedPlayer; // 0x4e8	
	
	// Datamap fields:
	// void InputExplode; // 0x0
};

