#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
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
	[[maybe_unused]] uint8_t __pad0810[0xc]; // 0x810
public:
	CHandle< C_BaseEntity > m_hTarget; // 0x81c	
	float m_flMaxDistance; // 0x820	
	float m_flArmingTime; // 0x824	
	float m_flChargeAmount; // 0x828	
	bool m_bCollideWithThrower; // 0x82c	
	bool m_bNewCollideWithThrower; // 0x82d	
private:
	[[maybe_unused]] uint8_t __pad082e[0xa]; // 0x82e
public:
	float m_flTickSoundInterval; // 0x838	
private:
	[[maybe_unused]] uint8_t __pad083c[0x4]; // 0x83c
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x840	
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x84c	
	// MNetworkEnable
	CUtlStringToken m_abilityID; // 0x858	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hThrower; // 0x85c	
	// MNetworkEnable
	CUtlSymbolLarge m_sParticleName; // 0x860	
	// MNetworkEnable
	Vector m_vecSpawnPosition; // 0x868	
	// MNetworkEnable
	float m_flProjectileSpeed; // 0x874	
	// MNetworkEnable
	float m_flMaxLifetime; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad087c[0x4]; // 0x87c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "ParticleRadiusChanged"
	float m_flParticleRadius; // 0x880	
private:
	[[maybe_unused]] uint8_t __pad0884[0xc]; // 0x884
public:
	float m_flPreviousTimeScale; // 0x890	
};

