#pragma once

#include <cstdint>

struct VPhysics2ShapeDef_t;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0xa0
// 
// MGetKV3ClassDefaults
struct VPhysXBodyPart_t
{
public:
	uint32_t m_nFlags; // 0x0	
	float m_flMass; // 0x4	
	// -> m_spheres - 0x8
	// -> m_capsules - 0x20
	// -> m_hulls - 0x38
	// -> m_meshes - 0x50
	// -> m_CollisionAttributeIndices - 0x68
	VPhysics2ShapeDef_t m_rnShape; // 0x8	
	uint16_t m_nCollisionAttributeIndex; // 0x80	
	uint16_t m_nReserved; // 0x82	
	float m_flInertiaScale; // 0x84	
	float m_flLinearDamping; // 0x88	
	float m_flAngularDamping; // 0x8c	
	bool m_bOverrideMassCenter; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0091[0x3]; // 0x91
public:
	Vector m_vMassCenterOverride; // 0x94	
};

