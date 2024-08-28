#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemPickupPunchableVData : public CCitadelModifierVData
{
public:
	float m_flPhysicsRadius; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsDroppingParticle; // 0x600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsPunchableParticle; // 0x6e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NearRejuvAuraModifier; // 0x7c0	
};

