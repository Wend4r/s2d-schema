#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x240
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ModelCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1b8	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1bc	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x1bd	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1be	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1bf	
};

