#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
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
// MNetworkOverride "m_lifeState"
// MNetworkVarNames "bool m_bBeamActive"
// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames "bool m_bMinion"
// MNetworkVarNames "EHANDLE m_hLookTarget"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
class C_AI_CitadelNPC : public C_AI_BaseNPC
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x1c]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnEyeBeamActiveChanged"
	bool m_bBeamActive; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cb5[0x3]; // 0xcb5
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnEyeBeamTargetChanged"
	Vector m_vEyeBeamTarget; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cc4[0x4b4]; // 0xcc4
public:
	int32_t m_nPlayerTeamEvent; // 0x1178	
private:
	[[maybe_unused]] uint8_t __pad117c[0x4c]; // 0x117c
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0x11c8	
	// MNetworkEnable
	bool m_bMinion; // 0x1218	
private:
	[[maybe_unused]] uint8_t __pad1219[0x3]; // 0x1219
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLookTarget; // 0x121c	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1220	
};

