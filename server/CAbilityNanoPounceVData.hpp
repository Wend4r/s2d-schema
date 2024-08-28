#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityNanoPounceVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1788	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1798	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x17a8	
	// MPropertyStartGroup "Gameplay"
	float m_flPounceDistanceFromTarget; // 0x17b8	
	float m_flPounceTargetOffset; // 0x17bc	
	float m_flPounceToTargetMinStartTime; // 0x17c0	
	float m_flPounceToTargetMaxStartTime; // 0x17c4	
	float m_flPounceToEnemyMaxTime; // 0x17c8	
	float m_flPounceUpForce; // 0x17cc	
	float m_flPounceXYForce; // 0x17d0	
	float m_flPounceNearbyForceFactor; // 0x17d4	
	float m_flPounceMinSpeed; // 0x17d8	
	float m_flPounceToTargetDist; // 0x17dc	
	float m_flAllyMinTargetRange; // 0x17e0	
};

