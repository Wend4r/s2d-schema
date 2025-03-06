#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_Tornado_Lift_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_HoldInPlaceModifier; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // 0x668	
};

