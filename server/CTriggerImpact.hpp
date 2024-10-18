#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CTriggerImpact : public CTriggerMultiple
{
public:
	float m_flMagnitude; // 0x988	
	float m_flNoise; // 0x98c	
	float m_flViewkick; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0994[0x4]; // 0x994
public:
	CEntityOutputTemplate< Vector > m_pOutputForce; // 0x998	
	
	// Datamap fields:
	// void InputImpact; // 0x0
	// float InputSetMagnitude; // 0x0
	// void CTriggerImpactDisable; // 0x0
};

