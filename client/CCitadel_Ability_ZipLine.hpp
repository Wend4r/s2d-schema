#pragma once

#include <cstdint>

struct GameTime_t;
struct CNetworkVelocityVector;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1150
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
class CCitadel_Ability_ZipLine : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x4a0]; // 0xc28
public:
	GameTime_t m_flActivatePressTime; // 0x10c8	
	bool m_bThinking; // 0x10cc	
	bool m_bMoveCollidedPushUp; // 0x10cd	
private:
	[[maybe_unused]] uint8_t __pad10ce[0xe]; // 0x10ce
public:
	// MNetworkEnable
	GameTime_t m_flTimeStartZipping; // 0x10dc	
	// MNetworkEnable
	GameTime_t m_flTimeForKnockdownProtection; // 0x10e0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flTimeStopZipping; // 0x10e4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flCasterSpeed; // 0x10e8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkVelocityVector m_vecInitialVel; // 0x10ec	
private:
	[[maybe_unused]] uint8_t __pad1114[0xc]; // 0x1114
public:
	// MNetworkEnable
	Vector m_vecAttachPoint; // 0x1120	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_pPrevNode; // 0x112c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_pNextNode; // 0x1130	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flTimeEnterState; // 0x1134	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0x1138	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDamagedTime; // 0x113c	
	// MNetworkEnable
	// MNetworkChangeCallback "ZiplingAttachStateChanged"
	EAttachState_t m_eAttachState; // 0x1140	
	// MNetworkEnable
	int32_t m_iAttachedZipLineLane; // 0x1144	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDroppedFromZipline; // 0x1148	
	AttachmentHandle_t m_hAttachZipLine; // 0x1149	
};

