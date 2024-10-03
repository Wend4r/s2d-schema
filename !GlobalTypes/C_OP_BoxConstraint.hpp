#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_BoxConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min coords"
	CParticleCollectionVecInput m_vecMin; // 0x1c0	
	// MPropertyFriendlyName "max coords"
	CParticleCollectionVecInput m_vecMax; // 0x838	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0xeb0	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xeb4	
	// MPropertyFriendlyName "Take radius into account"
	bool m_bAccountForRadius; // 0xeb5	
};

