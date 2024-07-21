#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemPickupPunchableVData : public CCitadelModifierVData
{
public:
	float m_flPhysicsRadius; // 0x5f0	
private:
	[[maybe_unused]] uint8_t __pad05f4[0x4]; // 0x5f4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsDroppingParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsPunchableParticle; // 0x6d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NearRejuvAuraModifier; // 0x7b8	
};

