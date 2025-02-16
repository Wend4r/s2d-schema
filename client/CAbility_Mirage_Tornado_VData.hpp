#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1738
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TornadoCastParticle; // 0x1590	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1670	
	CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // 0x1680	
	CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // 0x1690	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x16a0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTravelingInTornado; // 0x16b0	
};

