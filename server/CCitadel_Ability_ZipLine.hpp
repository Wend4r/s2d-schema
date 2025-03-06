#pragma once

#include <cstdint>

struct GameTime_t;
struct CNetworkVelocityVector;
struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfb0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flTimeStartZipping"
// MNetworkVarNames "GameTime_t m_flTimeForKnockdownProtection"
// MNetworkVarNames "GameTime_t m_flTimeStopZipping"
// MNetworkVarNames "float m_flCasterSpeed"
// MNetworkVarNames "CNetworkVelocityVector m_vecInitialVel"
// MNetworkVarNames "Vector m_vecAttachPoint"
// MNetworkVarNames "EHANDLE m_pPrevNode"
// MNetworkVarNames "EHANDLE m_pNextNode"
// MNetworkVarNames "GameTime_t m_flTimeEnterState"
// MNetworkVarNames "GameTime_t m_flLatchTime"
// MNetworkVarNames "GameTime_t m_flDamagedTime"
// MNetworkVarNames "EAttachState_t m_eAttachState"
// MNetworkVarNames "int m_iAttachedZipLineLane"
// MNetworkVarNames "bool m_bDroppedFromZipline"
// MNetworkVarNames "Vector m_vAttachZipLineOffset"
// MNetworkVarNames "float m_flZiplineAirDrag"
class CCitadel_Ability_ZipLine : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x3f0]; // 0xb00
public:
	GameTime_t m_flActivatePressTime; // 0xef0	
	bool m_bThinking; // 0xef4	
	bool m_bMoveCollidedPushUp; // 0xef5	
private:
	[[maybe_unused]] uint8_t __pad0ef6[0x36]; // 0xef6
public:
	// MNetworkEnable
	GameTime_t m_flTimeStartZipping; // 0xf2c	
	// MNetworkEnable
	GameTime_t m_flTimeForKnockdownProtection; // 0xf30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeStopZipping; // 0xf34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flCasterSpeed; // 0xf38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkVelocityVector m_vecInitialVel; // 0xf3c	
private:
	[[maybe_unused]] uint8_t __pad0f64[0xc]; // 0xf64
public:
	// MNetworkEnable
	Vector m_vecAttachPoint; // 0xf70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_pPrevNode; // 0xf7c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_pNextNode; // 0xf80	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeEnterState; // 0xf84	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0xf88	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDamagedTime; // 0xf8c	
	// MNetworkEnable
	// MNetworkChangeCallback "ZiplingAttachStateChanged"
	EAttachState_t m_eAttachState; // 0xf90	
	// MNetworkEnable
	int32_t m_iAttachedZipLineLane; // 0xf94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bDroppedFromZipline; // 0xf98	
	AttachmentHandle_t m_hAttachZipLine; // 0xf99	
private:
	[[maybe_unused]] uint8_t __pad0f9a[0x2]; // 0xf9a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttachZipLineOffset; // 0xf9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flZiplineAirDrag; // 0xfa8	
};

