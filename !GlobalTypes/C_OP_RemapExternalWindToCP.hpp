#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x828
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	int32_t m_nCP; // 0x1c0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x1c4	
	// MPropertyFriendlyName "wind scale"
	CParticleCollectionVecInput m_vecScale; // 0x1c8	
	// MPropertyFriendlyName "set magnitude instead of vector"
	bool m_bSetMagnitude; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0821[0x3]; // 0x821
public:
	// MPropertyFriendlyName "magnitude output component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "!m_bSetMagnitude"
	int32_t m_nOutVectorField; // 0x824	
};

