#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe10
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "Output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1c8	
	// MPropertyFriendlyName "hitbox data"
	ParticleHitboxDataSelection_t m_nHitboxDataType; // 0x1cc	
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_flInputMax; // 0x328	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x480	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5d8	
	// MPropertyFriendlyName "intersection height CP"
	// MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
	int32_t m_nHeightControlPointNumber; // 0x730	
private:
	[[maybe_unused]] uint8_t __pad0734[0x4]; // 0x734
public:
	// MPropertyFriendlyName "comparison velocity"
	// MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x738	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xd90	
};

