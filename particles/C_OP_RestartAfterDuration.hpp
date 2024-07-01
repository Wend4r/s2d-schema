#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RestartAfterDuration : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum restart time"
	float m_flDurationMin; // 0x1b8	
	// MPropertyFriendlyName "maximum restart time"
	float m_flDurationMax; // 0x1bc	
	// MPropertyFriendlyName "control point to scale duration"
	int32_t m_nCP; // 0x1c0	
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1c4	
	// MPropertyFriendlyName "child group ID"
	int32_t m_nChildGroupID; // 0x1c8	
	// MPropertyFriendlyName "only restart children"
	bool m_bOnlyChildren; // 0x1cc	
};

