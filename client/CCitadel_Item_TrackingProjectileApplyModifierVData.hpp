#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TrackingProjectileApplyModifierVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileImpactParticle; // 0x1610	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x16f0	
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyOnlyModifier; // 0x1700	
};

