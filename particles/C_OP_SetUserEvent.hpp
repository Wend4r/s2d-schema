#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetUserEvent : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input value"
	CPerParticleFloatInput m_flInput; // 0x1b8	
	// MPropertyFriendlyName "rising edge value"
	CPerParticleFloatInput m_flRisingEdge; // 0x310	
	// MPropertyFriendlyName "rising edge event type"
	EventTypeSelection_t m_nRisingEventType; // 0x468	
private:
	[[maybe_unused]] uint8_t __pad046c[0x4]; // 0x46c
public:
	// MPropertyFriendlyName "falling edge value"
	CPerParticleFloatInput m_flFallingEdge; // 0x470	
	// MPropertyFriendlyName "falling edge event type"
	EventTypeSelection_t m_nFallingEventType; // 0x5c8	
};

