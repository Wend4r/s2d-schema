#pragma once

#include <cstdint>

struct SatVolumeIndex_t;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf10
// Has VTable
// 
// MNetworkVarNames "bool m_bShadowFormCast"
// MNetworkVarNames "Vector m_vYamatoCastPos"
// MNetworkVarNames "Vector m_vTargetCastPos"
// MNetworkVarNames "GameTime_t m_flFlyingToTargetStartTime"
// MNetworkVarNames "GameTime_t m_flEndAttackTime"
// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
// MNetworkVarNames "GameTime_t m_flAttackLatchTime"
// MNetworkVarNames "Vector m_vAttackLatchPos"
// MNetworkVarNames "EHANDLE m_hTarget"
// MNetworkVarNames "bool m_bIsTargetAlly"
// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
// MNetworkVarNames "Vector m_rgPath"
// MNetworkVarNames "int m_nPathIdx"
// MNetworkVarNames "int m_nPathSize"
// MNetworkVarNames "float m_flPathLength"
// MNetworkVarNames "Vector m_vFlyingInitialOffsetToPath"
// MNetworkVarNames "float flDistFlown"
class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c58[0x10]; // 0xc58
public:
	SatVolumeIndex_t m_desatVolIdx; // 0xc68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShadowFormCast; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c6d[0x3]; // 0xc6d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vYamatoCastPos; // 0xc70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vTargetCastPos; // 0xc7c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flFlyingToTargetStartTime; // 0xc88	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flEndAttackTime; // 0xc8c	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xc90	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xc94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackLatchTime; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttackLatchPos; // 0xc9c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xca8	
	// MNetworkEnable
	bool m_bIsTargetAlly; // 0xcac	
private:
	[[maybe_unused]] uint8_t __pad0cad[0x3]; // 0xcad
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cb4[0x4]; // 0xcb4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnPathChanged"
	Vector m_rgPath[20]; // 0xcb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathIdx; // 0xda8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathSize; // 0xdac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flPathLength; // 0xdb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vFlyingInitialOffsetToPath; // 0xdb4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float flDistFlown; // 0xdc0	
	Vector m_vLastSafePos; // 0xdc4	
private:
	[[maybe_unused]] uint8_t __pad0dd0[0xe0]; // 0xdd0
public:
	ParticleIndex_t m_nGrappleTravelEffect; // 0xeb0	
private:
	[[maybe_unused]] uint8_t __pad0eb4[0x54]; // 0xeb4
public:
	bool m_bPathDirty; // 0xf08	
};

