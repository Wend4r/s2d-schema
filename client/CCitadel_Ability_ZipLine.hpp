#pragma once

#include <cstdint>

struct GameTime_t;
struct CNetworkVelocityVector;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x11b8
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
class CCitadel_Ability_ZipLine : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x4d8]; // 0xc50
public:
	GameTime_t m_flActivatePressTime; // 0x1128	
	bool m_bThinking; // 0x112c	
	bool m_bMoveCollidedPushUp; // 0x112d	
private:
	[[maybe_unused]] uint8_t __pad112e[0xe]; // 0x112e
public:
	// MNetworkEnable
	GameTime_t m_flTimeStartZipping; // 0x113c	
	// MNetworkEnable
	GameTime_t m_flTimeForKnockdownProtection; // 0x1140	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flTimeStopZipping; // 0x1144	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flCasterSpeed; // 0x1148	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkVelocityVector m_vecInitialVel; // 0x114c	
private:
	[[maybe_unused]] uint8_t __pad1174[0xc]; // 0x1174
public:
	// MNetworkEnable
	Vector m_vecAttachPoint; // 0x1180	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_pPrevNode; // 0x118c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_pNextNode; // 0x1190	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flTimeEnterState; // 0x1194	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0x1198	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDamagedTime; // 0x119c	
	// MNetworkEnable
	// MNetworkChangeCallback "ZiplingAttachStateChanged"
	EAttachState_t m_eAttachState; // 0x11a0	
	// MNetworkEnable
	int32_t m_iAttachedZipLineLane; // 0x11a4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDroppedFromZipline; // 0x11a8	
	AttachmentHandle_t m_hAttachZipLine; // 0x11a9	
private:
	[[maybe_unused]] uint8_t __pad11aa[0x2]; // 0x11aa
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vAttachZipLineOffset; // 0x11ac	
};

