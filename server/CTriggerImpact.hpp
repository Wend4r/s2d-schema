#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
class CTriggerImpact : public CTriggerMultiple
{
public:
	float m_flMagnitude; // 0x940	
	float m_flNoise; // 0x944	
	float m_flViewkick; // 0x948	
private:
	[[maybe_unused]] uint8_t __pad094c[0x4]; // 0x94c
public:
	CEntityOutputTemplate< Vector > m_pOutputForce; // 0x950	
	
	// Datamap fields:
	// void InputImpact; // 0x0
	// float InputSetMagnitude; // 0x0
	// void CTriggerImpactDisable; // 0x0
};

