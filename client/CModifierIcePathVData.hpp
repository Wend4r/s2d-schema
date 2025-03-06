#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xad8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierIcePathVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FrontModel; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BodyModel; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatingParticle; // 0x8f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IcePathBuffParticle; // 0x9d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0xab8	
	CEmbeddedSubclass< CCitadelModifier > m_BonusSpiritLingerModifier; // 0xac8	
};

