#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x478
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1b8	
	// MPropertyFriendlyName "Second Control point to set"
	int32_t m_nSecondControlPoint; // 0x1bc	
	// MPropertyFriendlyName "Take radius into account for distance"
	bool m_bUseRadius; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c1[0x7]; // 0x1c1
public:
	// MPropertyFriendlyName "Radius scale for distance calc"
	// MPropertySuppressExpr "!m_bUseRadius"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1c8	
	// MPropertyFriendlyName "Parent radius scale for distance calc"
	// MPropertySuppressExpr "!m_bUseRadius"
	CParticleCollectionFloatInput m_flParentRadiusScale; // 0x320	
};

