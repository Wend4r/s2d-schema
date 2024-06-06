#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x328
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "first child to enable"
	int32_t m_nFirstChild; // 0x1c4	
	// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x1c8	
	// MPropertyFriendlyName "remove children when particle count lowers"
	bool m_bDisableChildren; // 0x320	
	// MPropertyFriendlyName "play endcap when children are removed"
	// MPropertySuppressExpr "!m_bDisableChildren"
	bool m_bPlayEndcapOnStop; // 0x321	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	// MPropertySuppressExpr "!m_bDisableChildren"
	bool m_bDestroyImmediately; // 0x322	
};

