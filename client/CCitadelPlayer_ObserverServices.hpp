#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MNetworkVarNames "QAngle m_angTargetCamera"
// MNetworkVarNames "Vector m_vTargetCameraPos"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOverrideObserverTarget"
// MNetworkVarNames "ObserverMode_t m_iOverrideObserverMode"
// MNetworkVarNames "int32 m_iSecondsAfterDeathToAllowObserving"
class CCitadelPlayer_ObserverServices : public CPlayer_ObserverServices
{
public:
	int32_t m_nLastLocalPlayerObservedTeam; // 0x58	
	int32_t m_nLastObservedTeam; // 0x5c	
	int32_t m_nCurrentObservedTeam; // 0x60	
	CHandle< C_BaseEntity > m_hLastObserverTarget; // 0x64	
	CHandle< C_BaseEntity > m_hPreviousTeamTarget; // 0x68	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angTargetCamera; // 0x6c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	Vector m_vTargetCameraPos; // 0x78	
	// MNetworkEnable
	// MNetworkChangeCallback "LocalPlayerExclusive"
	CHandle< C_BaseEntity > m_hOverrideObserverTarget; // 0x84	
	// MNetworkEnable
	// MNetworkChangeCallback "LocalPlayerExclusive"
	ObserverMode_t m_iOverrideObserverMode; // 0x88	
	// MNetworkEnable
	int32_t m_iSecondsAfterDeathToAllowObserving; // 0x8c	
};

