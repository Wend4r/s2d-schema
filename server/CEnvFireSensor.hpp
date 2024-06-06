#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CEnvFireSensor : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4c0	
	bool m_bHeatAtLevel; // 0x4c1	
private:
	[[maybe_unused]] uint8_t __pad04c2[0x2]; // 0x4c2
public:
	float m_radius; // 0x4c4	
	float m_targetLevel; // 0x4c8	
	float m_targetTime; // 0x4cc	
	float m_levelTime; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CEntityIOOutput m_OnHeatLevelStart; // 0x4d8	
	CEntityIOOutput m_OnHeatLevelEnd; // 0x500	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

