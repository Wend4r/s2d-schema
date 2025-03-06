#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAbilityComponent;
struct CCitadelRegenComponent;
struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1890
// Has VTable
// Is Abstract
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iTeam"
// MNetworkIncludeByName "m_vecViewOffset"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames "bool m_bMinion"
// MNetworkVarNames "EHANDLE m_hLookTarget"
// MNetworkVarNames "bool m_bBeamActive"
// MNetworkVarNames "Vector m_vEyeBeamTarget"
class CAI_CitadelNPC : public CAI_BaseNPC
{
private:
	[[maybe_unused]] uint8_t __pad1320[0x18]; // 0x1320
public:
	Vector m_vLastGroundEntityCheckPos; // 0x1338	
	GameTime_t m_flLastGroundCheckTime; // 0x1344	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1348	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelRegenComponent"
	// MNetworkAlias "CCitadelRegenComponent"
	// MNetworkTypeAlias "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1550	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x16d0	
private:
	[[maybe_unused]] uint8_t __pad16e8[0x4]; // 0x16e8
public:
	int32_t m_iBaseGoldReward; // 0x16ec	
	int32_t m_iSkillShotReward; // 0x16f0	
private:
	[[maybe_unused]] uint8_t __pad16f4[0x30]; // 0x16f4
public:
	CHandle< CCitadelBaseAbility > m_hAbilityOwner; // 0x1724	
private:
	[[maybe_unused]] uint8_t __pad1728[0x48]; // 0x1728
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0x1770	
	// MNetworkEnable
	bool m_bMinion; // 0x17d8	
private:
	[[maybe_unused]] uint8_t __pad17d9[0x3]; // 0x17d9
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hLookTarget; // 0x17dc	
private:
	[[maybe_unused]] uint8_t __pad17e0[0x10]; // 0x17e0
public:
	int32_t m_iCoverGroupID; // 0x17f0	
private:
	[[maybe_unused]] uint8_t __pad17f4[0x5c]; // 0x17f4
public:
	Vector m_vecSpawnOrigin; // 0x1850	
private:
	[[maybe_unused]] uint8_t __pad185c[0x18]; // 0x185c
public:
	// MNetworkEnable
	bool m_bBeamActive; // 0x1874	
private:
	[[maybe_unused]] uint8_t __pad1875[0x3]; // 0x1875
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vEyeBeamTarget; // 0x1878	
};

