#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPhysExplosion : public CPointEntity
{
public:
	bool m_bExplodeOnSpawn; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	float m_flMagnitude; // 0x4e4	
	float m_flDamage; // 0x4e8	
	float m_radius; // 0x4ec	
	CUtlSymbolLarge m_targetEntityName; // 0x4f0	
	float m_flInnerRadius; // 0x4f8	
	float m_flPushScale; // 0x4fc	
	bool m_bConvertToDebrisWhenPossible; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x7]; // 0x501
public:
	CEntityIOOutput m_OnPushedPlayer; // 0x508	
	
	// Datamap fields:
	// void InputExplode; // 0x0
};

