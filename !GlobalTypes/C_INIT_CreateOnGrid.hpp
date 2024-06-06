#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x9d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	CParticleCollectionFloatInput m_nXCount; // 0x1c0	
	// MPropertyFriendlyName "Y Dimension Count"
	CParticleCollectionFloatInput m_nYCount; // 0x318	
	// MPropertyFriendlyName "Z Dimension Count"
	CParticleCollectionFloatInput m_nZCount; // 0x470	
	// MPropertyFriendlyName "X Dimension Spacing"
	CParticleCollectionFloatInput m_nXSpacing; // 0x5c8	
	// MPropertyFriendlyName "Y Dimension Spacing"
	CParticleCollectionFloatInput m_nYSpacing; // 0x720	
	// MPropertyFriendlyName "Z Dimension Spacing"
	CParticleCollectionFloatInput m_nZSpacing; // 0x878	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x9d0	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x9d4	
	// MPropertyFriendlyName "center around control point"
	bool m_bCenter; // 0x9d5	
	// MPropertyFriendlyName "hollow"
	bool m_bHollow; // 0x9d6	
};

