#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CEnvFireSensor : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4b8	
	bool m_bHeatAtLevel; // 0x4b9	
private:
	[[maybe_unused]] uint8_t __pad04ba[0x2]; // 0x4ba
public:
	float m_radius; // 0x4bc	
	float m_targetLevel; // 0x4c0	
	float m_targetTime; // 0x4c4	
	float m_levelTime; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CEntityIOOutput m_OnHeatLevelStart; // 0x4d0	
	CEntityIOOutput m_OnHeatLevelEnd; // 0x4f8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

