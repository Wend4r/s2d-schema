#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
struct CParticleMassCalculationParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_BasicMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "gravity"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_Gravity; // 0x1c0	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	CParticleCollectionFloatInput m_fDrag; // 0x838	
	// MPropertyFriendlyName "Mass controls"
	CParticleMassCalculationParameters m_massControls; // 0x998	
	// MPropertyFriendlyName "max constraint passes"
	int32_t m_nMaxConstraintPasses; // 0xdc0	
	// MPropertyFriendlyName "use new code"
	bool m_bUseNewCode; // 0xdc4	
};

