#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Magician_AnimalHex_HexAreaVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HexModifier; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // 0x668	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEffect; // 0x748	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArmingSound; // 0x828	
	CSoundEventName m_strArmedSound; // 0x838	
	CSoundEventName m_strLoopingSound; // 0x848	
	CSoundEventName m_strHitSound; // 0x858	
};

