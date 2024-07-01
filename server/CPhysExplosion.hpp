#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPhysExplosion : public CPointEntity
{
public:
	bool m_bExplodeOnSpawn; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	float m_flMagnitude; // 0x4bc	
	float m_flDamage; // 0x4c0	
	float m_radius; // 0x4c4	
	CUtlSymbolLarge m_targetEntityName; // 0x4c8	
	float m_flInnerRadius; // 0x4d0	
	float m_flPushScale; // 0x4d4	
	bool m_bConvertToDebrisWhenPossible; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x7]; // 0x4d9
public:
	CEntityIOOutput m_OnPushedPlayer; // 0x4e0	
	
	// Datamap fields:
	// void InputExplode; // 0x0
};

