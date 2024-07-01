#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1c4	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x1c8	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x820	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x8a0	
	// MPropertyFriendlyName "get closest point on closest hitbox"
	bool m_bUseClosestPointOnHitbox; // 0x8a1	
private:
	[[maybe_unused]] uint8_t __pad08a2[0x2]; // 0x8a2
public:
	// MPropertyFriendlyName "closest point test type"
	ClosestPointTestType_t m_nTestType; // 0x8a4	
	// MPropertyFriendlyName "hybrid ratio"
	CParticleCollectionFloatInput m_flHybridRatio; // 0x8a8	
	// MPropertyFriendlyName "set initial position"
	bool m_bUpdatePosition; // 0xa00	
};

