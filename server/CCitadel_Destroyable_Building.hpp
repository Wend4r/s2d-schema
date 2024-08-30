#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct CEntityIOOutput;
struct GameTime_t;
struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf20
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
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xaf8	
	CEntityIOOutput m_OnDestroyed; // 0xb10	
	CEntityIOOutput m_OnRevitilized; // 0xb38	
	CEntityIOOutput m_OnDamageTaken; // 0xb60	
	CEntityIOOutput m_OnLifeChanged; // 0xb88	
	CEntityIOOutput m_OnBecomeActive; // 0xbb0	
	CEntityIOOutput m_OnBecomeInvulnerable; // 0xbd8	
	CEntityIOOutput m_OnBecomeVulnerable; // 0xc00	
	CEntityIOOutput m_OnUnderAttack; // 0xc28	
	CEntityIOOutput m_OnAttackSubsided; // 0xc50	
	int32_t m_nBuildingHealth; // 0xc78	
private:
	[[maybe_unused]] uint8_t __pad0c7c[0x4]; // 0xc7c
public:
	int32_t m_iLane; // 0xc80	
	GameTime_t m_flDestroyedTime; // 0xc84	
	GameTime_t m_flLastDamagedTime; // 0xc88	
	QAngle m_angOriginal; // 0xc8c	
private:
	[[maybe_unused]] uint8_t __pad0c98[0x18]; // 0xc98
public:
	CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cb8[0x8]; // 0xcb8
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xcc0	
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0xec8	
	// MNetworkEnable
	// MNetworkChangeCallback "DestroyedChanged"
	bool m_bDestroyed; // 0xf18	
	// MNetworkEnable
	bool m_bActive; // 0xf19	
	// MNetworkEnable
	bool m_bFinal; // 0xf1a	
};

