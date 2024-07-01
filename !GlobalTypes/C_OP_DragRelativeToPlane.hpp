#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xad0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DragRelativeToPlane : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "dampening"
	CParticleCollectionFloatInput m_flDragAtPlane; // 0x1b8	
	// MPropertyFriendlyName "falloff"
	CParticleCollectionFloatInput m_flFalloff; // 0x310	
	// MPropertyFriendlyName "dampen on only one side of plane"
	bool m_bDirectional; // 0x468	
private:
	[[maybe_unused]] uint8_t __pad0469[0x7]; // 0x469
public:
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecPlaneNormal; // 0x470	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xac8	
};

