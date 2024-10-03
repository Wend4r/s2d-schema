#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1c0	
	// MPropertyFriendlyName "Second Control point to set"
	int32_t m_nSecondControlPoint; // 0x1c4	
	// MPropertyFriendlyName "Take radius into account for distance"
	bool m_bUseRadius; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x7]; // 0x1c9
public:
	// MPropertyFriendlyName "Radius scale for distance calc"
	// MPropertySuppressExpr "!m_bUseRadius"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1d0	
	// MPropertyFriendlyName "Parent radius scale for distance calc"
	// MPropertySuppressExpr "!m_bUseRadius"
	CParticleCollectionFloatInput m_flParentRadiusScale; // 0x330	
};

