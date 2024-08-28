#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xb08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DragRelativeToPlane : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "dampening"
	CParticleCollectionFloatInput m_flDragAtPlane; // 0x1c0	
	// MPropertyFriendlyName "falloff"
	CParticleCollectionFloatInput m_flFalloff; // 0x320	
	// MPropertyFriendlyName "dampen on only one side of plane"
	bool m_bDirectional; // 0x480	
private:
	[[maybe_unused]] uint8_t __pad0481[0x7]; // 0x481
public:
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecPlaneNormal; // 0x488	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xb00	
};

