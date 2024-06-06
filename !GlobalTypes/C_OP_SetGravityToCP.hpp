#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x328
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetGravityToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to sample gravity"
	int32_t m_nCPInput; // 0x1c0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x1c4	
	// MPropertyFriendlyName "gravity scale"
	CParticleCollectionFloatInput m_flScale; // 0x1c8	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x320	
	// MPropertyFriendlyName "set gravity orientation to Z Down (instead of X)"
	// MPropertySuppressExpr "!m_bSetOrientation"
	bool m_bSetZDown; // 0x321	
};

