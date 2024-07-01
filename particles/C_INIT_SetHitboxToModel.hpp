#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa10
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x1c4	
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1cc	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x1d0	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x828	
	// MPropertyFriendlyName "maintain existing hitbox"
	bool m_bMaintainHitbox; // 0x834	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x835	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x836	
private:
	[[maybe_unused]] uint8_t __pad08b6[0x2]; // 0x8b6
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0x8b8	
};

