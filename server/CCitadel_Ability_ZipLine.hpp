#pragma once

#include <cstdint>

struct GameTime_t;
struct CNetworkVelocityVector;
struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfc0
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
class CCitadel_Ability_ZipLine : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x498]; // 0xaa8
public:
	GameTime_t m_flActivatePressTime; // 0xf40	
	bool m_bThinking; // 0xf44	
	bool m_bMoveCollidedPushUp; // 0xf45	
private:
	[[maybe_unused]] uint8_t __pad0f46[0x6]; // 0xf46
public:
	// MNetworkEnable
	GameTime_t m_flTimeStartZipping; // 0xf4c	
	// MNetworkEnable
	GameTime_t m_flTimeForKnockdownProtection; // 0xf50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flTimeStopZipping; // 0xf54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flCasterSpeed; // 0xf58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkVelocityVector m_vecInitialVel; // 0xf5c	
private:
	[[maybe_unused]] uint8_t __pad0f84[0xc]; // 0xf84
public:
	// MNetworkEnable
	Vector m_vecAttachPoint; // 0xf90	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< CBaseEntity > m_pPrevNode; // 0xf9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< CBaseEntity > m_pNextNode; // 0xfa0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flTimeEnterState; // 0xfa4	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0xfa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDamagedTime; // 0xfac	
	// MNetworkEnable
	// MNetworkChangeCallback "ZiplingAttachStateChanged"
	EAttachState_t m_eAttachState; // 0xfb0	
	// MNetworkEnable
	int32_t m_iAttachedZipLineLane; // 0xfb4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDroppedFromZipline; // 0xfb8	
	AttachmentHandle_t m_hAttachZipLine; // 0xfb9	
};

