#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	CParticleCollectionFloatInput m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "first child to enable"
	CParticleCollectionFloatInput m_nFirstChild; // 0x318	
	// MPropertyFriendlyName "# of children to enable"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x470	
	// MPropertyFriendlyName "play endcap when children are removed"
	bool m_bPlayEndcapOnStop; // 0x5c8	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	bool m_bDestroyImmediately; // 0x5c9	
};

