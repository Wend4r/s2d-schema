#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Cull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "cull percentage"
	float m_flCullPerc; // 0x1b8	
	// MPropertyFriendlyName "cull start time"
	float m_flCullStart; // 0x1bc	
	// MPropertyFriendlyName "cull end time"
	float m_flCullEnd; // 0x1c0	
	// MPropertyFriendlyName "cull time exponent"
	float m_flCullExp; // 0x1c4	
};

