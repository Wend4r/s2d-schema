#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
// 
// MNetworkIncludeByName "m_flTimeScale"
// MNetworkOverride "m_flTimeScale"
// MNetworkOverride "m_flTimeScale"
// MNetworkVarNames "Vector m_vInitialVelocity"
// MNetworkVarNames "Vector m_vInitialPosition"
// MNetworkVarNames "AbilityID_t m_abilityID"
// MNetworkVarNames "EHANDLE m_hThrower"
// MNetworkVarNames "string_t m_sParticleName"
// MNetworkVarNames "Vector m_vecSpawnPosition"
// MNetworkVarNames "float m_flProjectileSpeed"
// MNetworkVarNames "float m_flMaxLifetime"
// MNetworkVarNames "float m_flParticleRadius"
class CCitadelProjectile : public CBaseModelEntity
{
public:
	CHandle< CBaseEntity > m_hTarget; // 0x748	
	float m_flMaxDistance; // 0x74c	
	float m_flArmingTime; // 0x750	
	float m_flChargeAmount; // 0x754	
	bool m_bCollideWithThrower; // 0x758	
	bool m_bNewCollideWithThrower; // 0x759	
private:
	[[maybe_unused]] uint8_t __pad075a[0xe]; // 0x75a
public:
	float m_flTickSoundInterval; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad076c[0x4]; // 0x76c
public:
	Vector m_vLastAbsOrigin; // 0x770	
	Vector m_vLastAbsVelocity; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad0788[0x18]; // 0x788
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecTargetToIgnore; // 0x7a0	
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x7b8	
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x7c4	
	// MNetworkEnable
	CUtlStringToken m_abilityID; // 0x7d0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hThrower; // 0x7d4	
	// MNetworkEnable
	CUtlSymbolLarge m_sParticleName; // 0x7d8	
	// MNetworkEnable
	Vector m_vecSpawnPosition; // 0x7e0	
	// MNetworkEnable
	float m_flProjectileSpeed; // 0x7ec	
	// MNetworkEnable
	float m_flMaxLifetime; // 0x7f0	
	// MNetworkEnable
	float m_flParticleRadius; // 0x7f4	
};

