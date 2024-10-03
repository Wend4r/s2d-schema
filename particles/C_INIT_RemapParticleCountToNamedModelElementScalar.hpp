#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f8	
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x200	
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x208	
	bool m_bModelFromRenderer; // 0x210	
};

