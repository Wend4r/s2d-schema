#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x498
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x1c0	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1c4	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	CParticleCollectionFloatInput m_flReRandomRate; // 0x1d0	
	// MPropertyFriendlyName "control point min"
	Vector m_vecCPMinPos; // 0x328	
	// MPropertyFriendlyName "control point max"
	Vector m_vecCPMaxPos; // 0x334	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x340	
};

