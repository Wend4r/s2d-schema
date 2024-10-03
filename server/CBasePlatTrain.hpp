#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
class CBasePlatTrain : public CBaseToggle
{
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x7d0	
	CUtlSymbolLarge m_NoiseArrived; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07e0[0x8]; // 0x7e0
public:
	float m_volume; // 0x7e8	
	float m_flTWidth; // 0x7ec	
	float m_flTLength; // 0x7f0	
	
	// Datamap fields:
	// void m_pMovementSound; // 0x7e0
	// float rotation; // 0x7fffffff
};

