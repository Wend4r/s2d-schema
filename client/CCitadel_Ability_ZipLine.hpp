#pragma once

#include <cstdint>

struct GameTime_t;
struct CNetworkVelocityVector;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1110
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
	[[maybe_unused]] uint8_t __pad0c50[0x3f8]; // 0xc50
public:
	GameTime_t m_flActivatePressTime; // 0x1048	
	bool m_bThinking; // 0x104c	
	bool m_bMoveCollidedPushUp; // 0x104d	
private:
	[[maybe_unused]] uint8_t __pad104e[0x3e]; // 0x104e
public:
	// MNetworkEnable
	GameTime_t m_flTimeStartZipping; // 0x108c	
	// MNetworkEnable
	GameTime_t m_flTimeForKnockdownProtection; // 0x1090	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeStopZipping; // 0x1094	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flCasterSpeed; // 0x1098	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkVelocityVector m_vecInitialVel; // 0x109c	
private:
	[[maybe_unused]] uint8_t __pad10c4[0xc]; // 0x10c4
public:
	// MNetworkEnable
	Vector m_vecAttachPoint; // 0x10d0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_pPrevNode; // 0x10dc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_pNextNode; // 0x10e0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeEnterState; // 0x10e4	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0x10e8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDamagedTime; // 0x10ec	
	// MNetworkEnable
	// MNetworkChangeCallback "ZiplingAttachStateChanged"
	EAttachState_t m_eAttachState; // 0x10f0	
	// MNetworkEnable
	int32_t m_iAttachedZipLineLane; // 0x10f4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bDroppedFromZipline; // 0x10f8	
	AttachmentHandle_t m_hAttachZipLine; // 0x10f9	
private:
	[[maybe_unused]] uint8_t __pad10fa[0x2]; // 0x10fa
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttachZipLineOffset; // 0x10fc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flZiplineAirDrag; // 0x1108	
};

