#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x250
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity minimum"
	float m_flVelocityMin; // 0x1c0	
	// MPropertyFriendlyName "velocity maximum"
	float m_flVelocityMax; // 0x1c4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1cc	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x24c	
};

