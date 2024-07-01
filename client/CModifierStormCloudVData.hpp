#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb60
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierStormCloudVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapFriendly; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawFriendly; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEFriendly; // 0x7a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapEnemy; // 0x880	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawEnemy; // 0x960	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEEnemy; // 0xa40	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strChannelEndingSoonSound; // 0xb20	
	CSoundEventName m_strChannelFinishedSound; // 0xb30	
	CSoundEventName m_strDamageRecievedSound; // 0xb40	
	CSoundEventName m_strAmbientZapSound; // 0xb50	
};

