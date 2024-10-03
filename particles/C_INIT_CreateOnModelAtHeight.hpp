#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1370
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1c8	
	// MPropertyFriendlyName "force creation height to desired height"
	bool m_bForceZ; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "height override control point number"
	int32_t m_nHeightCP; // 0x1d0	
	// MPropertyFriendlyName "desired height is relative to water"
	bool m_bUseWaterHeight; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "relative desired height"
	CParticleCollectionFloatInput m_flDesiredHeight; // 0x1d8	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x338	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x9b0	
	// MPropertyFriendlyName "bias type"
	ParticleHitboxBiasType_t m_nBiasType; // 0x1028	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0x102c	
	// MPropertyFriendlyName "bias prefers moving hitboxes"
	bool m_bPreferMovingBoxes; // 0x102d	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x102e	
private:
	[[maybe_unused]] uint8_t __pad10ae[0x2]; // 0x10ae
public:
	// MPropertyFriendlyName "hitbox velocity inherited scale"
	CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x10b0	
	// MPropertyFriendlyName "max hitbox velocity"
	CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x1210	
};

