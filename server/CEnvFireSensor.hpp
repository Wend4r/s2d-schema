#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CEnvFireSensor : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4e0	
	bool m_bHeatAtLevel; // 0x4e1	
private:
	[[maybe_unused]] uint8_t __pad04e2[0x2]; // 0x4e2
public:
	float m_radius; // 0x4e4	
	float m_targetLevel; // 0x4e8	
	float m_targetTime; // 0x4ec	
	float m_levelTime; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CEntityIOOutput m_OnHeatLevelStart; // 0x4f8	
	CEntityIOOutput m_OnHeatLevelEnd; // 0x520	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

