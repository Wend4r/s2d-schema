#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct CEntityIOOutput;
struct GameTime_t;
struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xef8
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames "bool m_bDestroyed"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bFinal"
class CCitadel_Destroyable_Building : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xad8	
	CEntityIOOutput m_OnDestroyed; // 0xaf0	
	CEntityIOOutput m_OnRevitilized; // 0xb18	
	CEntityIOOutput m_OnDamageTaken; // 0xb40	
	CEntityIOOutput m_OnLifeChanged; // 0xb68	
	CEntityIOOutput m_OnBecomeActive; // 0xb90	
	CEntityIOOutput m_OnBecomeInvulnerable; // 0xbb8	
	CEntityIOOutput m_OnBecomeVulnerable; // 0xbe0	
	CEntityIOOutput m_OnUnderAttack; // 0xc08	
	CEntityIOOutput m_OnAttackSubsided; // 0xc30	
	int32_t m_nBuildingHealth; // 0xc58	
private:
	[[maybe_unused]] uint8_t __pad0c5c[0x4]; // 0xc5c
public:
	int32_t m_iLane; // 0xc60	
	GameTime_t m_flDestroyedTime; // 0xc64	
	GameTime_t m_flLastDamagedTime; // 0xc68	
	QAngle m_angOriginal; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c78[0x18]; // 0xc78
public:
	CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xc90	
private:
	[[maybe_unused]] uint8_t __pad0c98[0x8]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xca0	
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0xea0	
	// MNetworkEnable
	// MNetworkChangeCallback "DestroyedChanged"
	bool m_bDestroyed; // 0xef0	
	// MNetworkEnable
	bool m_bActive; // 0xef1	
	// MNetworkEnable
	bool m_bFinal; // 0xef2	
};

