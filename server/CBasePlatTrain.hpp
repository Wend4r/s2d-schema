#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7b8
// Has VTable
class CBasePlatTrain : public CBaseToggle
{
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x790	
	CUtlSymbolLarge m_NoiseArrived; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad07a0[0x8]; // 0x7a0
public:
	float m_volume; // 0x7a8	
	float m_flTWidth; // 0x7ac	
	float m_flTLength; // 0x7b0	
	
	// Datamap fields:
	// void m_pMovementSound; // 0x7a0
	// float rotation; // 0x7fffffff
};

