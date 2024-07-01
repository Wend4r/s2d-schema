#pragma once

#include <cstdint>

struct CPerParticleVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8a0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ModelDampenMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1b8	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1bc	
	// MPropertyFriendlyName "dampen outside instead of inside"
	bool m_bOutside; // 0x1bd	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1be	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1bf	
private:
	[[maybe_unused]] uint8_t __pad023f[0x1]; // 0x23f
public:
	// MPropertyFriendlyName "test position offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecPosOffset; // 0x240	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x898	
};

