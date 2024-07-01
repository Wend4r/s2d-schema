#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1310
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1c0	
	// MPropertyFriendlyName "force creation height to desired height"
	bool m_bForceZ; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "height override control point number"
	int32_t m_nHeightCP; // 0x1c8	
	// MPropertyFriendlyName "desired height is relative to water"
	bool m_bUseWaterHeight; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "relative desired height"
	CParticleCollectionFloatInput m_flDesiredHeight; // 0x1d0	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x328	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x980	
	// MPropertyFriendlyName "bias type"
	ParticleHitboxBiasType_t m_nBiasType; // 0xfd8	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xfdc	
	// MPropertyFriendlyName "bias prefers moving hitboxes"
	bool m_bPreferMovingBoxes; // 0xfdd	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xfde	
private:
	[[maybe_unused]] uint8_t __pad105e[0x2]; // 0x105e
public:
	// MPropertyFriendlyName "hitbox velocity inherited scale"
	CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x1060	
	// MPropertyFriendlyName "max hitbox velocity"
	CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x11b8	
};

