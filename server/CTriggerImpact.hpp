#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
class CTriggerImpact : public CTriggerMultiple
{
public:
	float m_flMagnitude; // 0x948	
	float m_flNoise; // 0x94c	
	float m_flViewkick; // 0x950	
private:
	[[maybe_unused]] uint8_t __pad0954[0x4]; // 0x954
public:
	CEntityOutputTemplate< Vector > m_pOutputForce; // 0x958	
	
	// Datamap fields:
	// void InputImpact; // 0x0
	// float InputSetMagnitude; // 0x0
	// void CTriggerImpactDisable; // 0x0
};

