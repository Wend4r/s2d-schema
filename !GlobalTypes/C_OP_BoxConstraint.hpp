#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe70
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_BoxConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min coords"
	CParticleCollectionVecInput m_vecMin; // 0x1b8	
	// MPropertyFriendlyName "max coords"
	CParticleCollectionVecInput m_vecMax; // 0x810	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0xe68	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xe6c	
	// MPropertyFriendlyName "Take radius into account"
	bool m_bAccountForRadius; // 0xe6d	
};

