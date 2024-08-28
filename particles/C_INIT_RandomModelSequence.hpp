#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x3d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomModelSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "activity"
	// MPropertySuppressExpr "mod != dota"
	char m_ActivityName[256]; // 0x1c8	
	// MPropertyFriendlyName "sequence"
	// MPropertySuppressExpr "mod == dota"
	char m_SequenceName[256]; // 0x2c8	
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x3c8	
};

