#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct CEntityIOOutput;
struct GameTime_t;
struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1050
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
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xc10	
	CEntityIOOutput m_OnDestroyed; // 0xc28	
	CEntityIOOutput m_OnRevitilized; // 0xc50	
	CEntityIOOutput m_OnDamageTaken; // 0xc78	
	CEntityIOOutput m_OnLifeChanged; // 0xca0	
	CEntityIOOutput m_OnBecomeActive; // 0xcc8	
	CEntityIOOutput m_OnBecomeInvulnerable; // 0xcf0	
	CEntityIOOutput m_OnBecomeVulnerable; // 0xd18	
	CEntityIOOutput m_OnUnderAttack; // 0xd40	
	CEntityIOOutput m_OnAttackSubsided; // 0xd68	
	int32_t m_nBuildingHealth; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d94[0x4]; // 0xd94
public:
	int32_t m_iLane; // 0xd98	
	GameTime_t m_flDestroyedTime; // 0xd9c	
	GameTime_t m_flLastDamagedTime; // 0xda0	
	QAngle m_angOriginal; // 0xda4	
private:
	[[maybe_unused]] uint8_t __pad0db0[0x18]; // 0xdb0
public:
	CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xdc8	
private:
	[[maybe_unused]] uint8_t __pad0dd0[0x8]; // 0xdd0
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xdd8	
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0xfe0	
	// MNetworkEnable
	// MNetworkChangeCallback "DestroyedChanged"
	bool m_bDestroyed; // 0x1048	
	// MNetworkEnable
	bool m_bActive; // 0x1049	
	// MNetworkEnable
	bool m_bFinal; // 0x104a	
};

