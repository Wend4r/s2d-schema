#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1770
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TornadoCastParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // 0x16c8	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x16d8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTravelingInTornado; // 0x16e8	
};

