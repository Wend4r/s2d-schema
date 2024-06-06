#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1de8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ExternalWindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "sample position"
	CPerParticleVecInput m_vecSamplePosition; // 0x1c8	
	// MPropertyFriendlyName "force scale"
	CPerParticleVecInput m_vecScale; // 0x820	
	// MPropertyFriendlyName "sample wind"
	bool m_bSampleWind; // 0xe78	
	// MPropertyFriendlyName "sample water current"
	bool m_bSampleWater; // 0xe79	
	// MPropertyFriendlyName "dampen gravity/buoyancy near water plane"
	// MPropertySuppressExpr "!m_bSampleWater"
	bool m_bDampenNearWaterPlane; // 0xe7a	
	// MPropertyFriendlyName "sample local gravity"
	bool m_bSampleGravity; // 0xe7b	
private:
	[[maybe_unused]] uint8_t __pad0e7c[0x4]; // 0xe7c
public:
	// MPropertyFriendlyName "gravity force"
	// MPropertySuppressExpr "m_bSampleGravity"
	CPerParticleVecInput m_vecGravityForce; // 0xe80	
	// MPropertyFriendlyName "use Movement Basic for Local Gravity & Buoyancy Scale"
	// MPropertySuppressExpr "!m_bSampleGravity"
	bool m_bUseBasicMovementGravity; // 0x14d8	
private:
	[[maybe_unused]] uint8_t __pad14d9[0x7]; // 0x14d9
public:
	// MPropertyFriendlyName "local gravity scale"
	// MPropertySuppressExpr "!m_bSampleGravity"
	CPerParticleFloatInput m_flLocalGravityScale; // 0x14e0	
	// MPropertyFriendlyName "local gravity buoyancy scale"
	// MPropertySuppressExpr "!m_bSampleGravity"
	CPerParticleFloatInput m_flLocalBuoyancyScale; // 0x1638	
	// MPropertyFriendlyName "buoyancy force"
	// MPropertySuppressExpr "!m_bSampleWater || m_bSampleGravity"
	CPerParticleVecInput m_vecBuoyancyForce; // 0x1790	
};

