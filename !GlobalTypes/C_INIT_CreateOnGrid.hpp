#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa10
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	CParticleCollectionFloatInput m_nXCount; // 0x1c8	
	// MPropertyFriendlyName "Y Dimension Count"
	CParticleCollectionFloatInput m_nYCount; // 0x328	
	// MPropertyFriendlyName "Z Dimension Count"
	CParticleCollectionFloatInput m_nZCount; // 0x488	
	// MPropertyFriendlyName "X Dimension Spacing"
	CParticleCollectionFloatInput m_nXSpacing; // 0x5e8	
	// MPropertyFriendlyName "Y Dimension Spacing"
	CParticleCollectionFloatInput m_nYSpacing; // 0x748	
	// MPropertyFriendlyName "Z Dimension Spacing"
	CParticleCollectionFloatInput m_nZSpacing; // 0x8a8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xa08	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xa0c	
	// MPropertyFriendlyName "center around control point"
	bool m_bCenter; // 0xa0d	
	// MPropertyFriendlyName "hollow"
	bool m_bHollow; // 0xa0e	
};

