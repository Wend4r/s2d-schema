#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbd8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierStormCloudVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapFriendly; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawFriendly; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEFriendly; // 0x818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapEnemy; // 0x8f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawEnemy; // 0x9d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEEnemy; // 0xab8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strChannelEndingSoonSound; // 0xb98	
	CSoundEventName m_strChannelFinishedSound; // 0xba8	
	CSoundEventName m_strDamageRecievedSound; // 0xbb8	
	CSoundEventName m_strAmbientZapSound; // 0xbc8	
};

