#pragma once

#include <cstdint>

struct GameTime_t;
struct CNetworkVelocityVector;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1130
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
class CCitadel_Ability_ZipLine : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x3f8]; // 0xca0
public:
	GameTime_t m_flActivatePressTime; // 0x1098	
	bool m_bThinking; // 0x109c	
	bool m_bMoveCollidedPushUp; // 0x109d	
private:
	[[maybe_unused]] uint8_t __pad109e[0xe]; // 0x109e
public:
	// MNetworkEnable
	GameTime_t m_flTimeStartZipping; // 0x10ac	
	// MNetworkEnable
	GameTime_t m_flTimeForKnockdownProtection; // 0x10b0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeStopZipping; // 0x10b4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flCasterSpeed; // 0x10b8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkVelocityVector m_vecInitialVel; // 0x10bc	
private:
	[[maybe_unused]] uint8_t __pad10e4[0xc]; // 0x10e4
public:
	// MNetworkEnable
	Vector m_vecAttachPoint; // 0x10f0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_pPrevNode; // 0x10fc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_pNextNode; // 0x1100	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeEnterState; // 0x1104	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0x1108	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDamagedTime; // 0x110c	
	// MNetworkEnable
	// MNetworkChangeCallback "ZiplingAttachStateChanged"
	EAttachState_t m_eAttachState; // 0x1110	
	// MNetworkEnable
	int32_t m_iAttachedZipLineLane; // 0x1114	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bDroppedFromZipline; // 0x1118	
	AttachmentHandle_t m_hAttachZipLine; // 0x1119	
private:
	[[maybe_unused]] uint8_t __pad111a[0x2]; // 0x111a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttachZipLineOffset; // 0x111c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flZiplineAirDrag; // 0x1128	
};

