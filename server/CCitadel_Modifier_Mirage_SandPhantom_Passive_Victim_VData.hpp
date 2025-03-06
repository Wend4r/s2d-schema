#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusPlayerParticle; // 0x668	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusVictimParticle; // 0x748	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusNPCParticle; // 0x828	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackDamageParticle; // 0x908	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackReadyParticle; // 0x9e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackAppliedParticle; // 0xac8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ConsumeMaxStacksSound; // 0xba8	
	CSoundEventName m_ConsumeMaxStacksNonHeroSound; // 0xbb8	
	CSoundEventName m_ApplyStackSound; // 0xbc8	
};

