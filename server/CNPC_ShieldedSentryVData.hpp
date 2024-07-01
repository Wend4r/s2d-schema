#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x350
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_ShieldedSentryVData : public CNPC_SimpleAnimatingAIVData
{
public:
	float m_flZShootPostionOffset; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad010c[0x4]; // 0x10c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillExplosionParticle; // 0x1f0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeployProgressModifier; // 0x2d0	
	CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // 0x2e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sSpawnSound; // 0x2f0	
	CSoundEventName m_sKillExplosionSound; // 0x300	
	CSoundEventName m_sTargetAcquiredLocalSound; // 0x310	
	CSoundEventName m_sTargetAcquiredSound; // 0x320	
	// MPropertyStartGroup "Stats"
	float m_flIdleTurnSpeed; // 0x330	
	float m_flIdleTurnAngles; // 0x334	
	float m_flTrooperTakeDamageMult; // 0x338	
	float m_flNeutralTakeDamageMulti; // 0x33c	
	float m_flNotifyEventTime; // 0x340	
	float m_flNearDeathDuration; // 0x344	
	float m_flMinimapRevealTime; // 0x348	
};

