#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetLeapVData : public CitadelAbilityVData
{
public:
	float m_flChannelingAirDrag; // 0x14f0	
	float m_flChannelingMaxFallSpeed; // 0x14f4	
	float m_flVerticalMoveSpeedTarget; // 0x14f8	
private:
	[[maybe_unused]] uint8_t __pad14fc[0x4]; // 0x14fc
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x16d0	
};

