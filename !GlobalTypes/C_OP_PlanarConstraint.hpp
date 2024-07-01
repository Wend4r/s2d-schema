#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PlanarConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "plane point"
	// MVectorIsCoordinate
	Vector m_PointOnPlane; // 0x1b8	
	// MPropertyFriendlyName "plane normal"
	Vector m_PlaneNormal; // 0x1c4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "global origin"
	bool m_bGlobalOrigin; // 0x1d4	
	// MPropertyFriendlyName "global normal"
	bool m_bGlobalNormal; // 0x1d5	
private:
	[[maybe_unused]] uint8_t __pad01d6[0x2]; // 0x1d6
public:
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1d8	
	// MPropertyFriendlyName "falloff distance from control point"
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x330	
	// MPropertyFriendlyName "use old code"
	bool m_bUseOldCode; // 0x488	
};

