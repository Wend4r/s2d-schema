#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Decay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	bool m_bRopeDecay; // 0x1b8	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x1b9	
};

