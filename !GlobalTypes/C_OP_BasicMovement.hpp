#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
struct CParticleMassCalculationParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xd80
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_BasicMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "gravity"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_Gravity; // 0x1b8	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	CParticleCollectionFloatInput m_fDrag; // 0x810	
	// MPropertyFriendlyName "Mass controls"
	CParticleMassCalculationParameters m_massControls; // 0x968	
	// MPropertyFriendlyName "max constraint passes"
	int32_t m_nMaxConstraintPasses; // 0xd78	
	// MPropertyFriendlyName "use new code"
	bool m_bUseNewCode; // 0xd7c	
};

