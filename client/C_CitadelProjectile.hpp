#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
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
class C_CitadelProjectile : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0808[0xc]; // 0x808
public:
	float m_flMaxDistance; // 0x814	
	float m_flArmingTime; // 0x818	
	float m_flChargeAmount; // 0x81c	
	bool m_bCollideWithThrower; // 0x820	
	bool m_bNewCollideWithThrower; // 0x821	
private:
	[[maybe_unused]] uint8_t __pad0822[0xe]; // 0x822
public:
	float m_flTickSoundInterval; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0834[0x4]; // 0x834
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x838	
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x844	
	// MNetworkEnable
	CUtlStringToken m_abilityID; // 0x850	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hThrower; // 0x854	
	// MNetworkEnable
	CUtlSymbolLarge m_sParticleName; // 0x858	
	// MNetworkEnable
	Vector m_vecSpawnPosition; // 0x860	
	// MNetworkEnable
	float m_flProjectileSpeed; // 0x86c	
	// MNetworkEnable
	float m_flMaxLifetime; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0874[0x4]; // 0x874
public:
	// MNetworkEnable
	// MNetworkChangeCallback "ParticleRadiusChanged"
	float m_flParticleRadius; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad087c[0xc]; // 0x87c
public:
	float m_flPreviousTimeScale; // 0x888	
};

