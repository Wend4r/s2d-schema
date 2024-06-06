#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x940
// Has VTable
class CTriggerImpact : public CTriggerMultiple
{
public:
	float m_flMagnitude; // 0x908	
	float m_flNoise; // 0x90c	
	float m_flViewkick; // 0x910	
private:
	[[maybe_unused]] uint8_t __pad0914[0x4]; // 0x914
public:
	CEntityOutputTemplate< Vector > m_pOutputForce; // 0x918	
	
	// Datamap fields:
	// void InputImpact; // 0x0
	// float InputSetMagnitude; // 0x0
	// void CTriggerImpactDisable; // 0x0
};

