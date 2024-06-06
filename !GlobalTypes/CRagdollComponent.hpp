#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
class CRagdollComponent : public CAnimGraphDoc_Component
{
public:
	CUtlVector< CAnimGraphDoc_RigidBodyWeightList > m_weightLists; // 0x38	
	float m_flSpringFrequencyMin; // 0x50	
	float m_flSpringFrequencyMax; // 0x54	
	float m_flMaxStretch; // 0x58	
	bool m_bSolidCollisionAtZeroWeight; // 0x5c	
};

