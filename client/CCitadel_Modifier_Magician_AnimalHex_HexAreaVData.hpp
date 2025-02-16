#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Magician_AnimalHex_HexAreaVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HexModifier; // 0x638	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // 0x648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEffect; // 0x728	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArmingSound; // 0x808	
	CSoundEventName m_strArmedSound; // 0x818	
	CSoundEventName m_strLoopingSound; // 0x828	
	CSoundEventName m_strHitSound; // 0x838	
};

