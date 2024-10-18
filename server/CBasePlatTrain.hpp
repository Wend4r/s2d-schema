#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x838
// Has VTable
class CBasePlatTrain : public CBaseToggle
{
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x810	
	CUtlSymbolLarge m_NoiseArrived; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad0820[0x8]; // 0x820
public:
	float m_volume; // 0x828	
	float m_flTWidth; // 0x82c	
	float m_flTLength; // 0x830	
	
	// Datamap fields:
	// void m_pMovementSound; // 0x820
	// float rotation; // 0x7fffffff
};

