#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
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
	int32_t m_nLastObservedTeam; // 0x50	
	int32_t m_nCurrentObservedTeam; // 0x54	
	CHandle< CBaseEntity > m_hLastObserverTarget; // 0x58	
	CHandle< CBaseEntity > m_hPreviousTeamTarget; // 0x5c	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angTargetCamera; // 0x60	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	Vector m_vTargetCameraPos; // 0x6c	
	// MNetworkEnable
	// MNetworkChangeCallback "LocalPlayerExclusive"
	CHandle< CBaseEntity > m_hOverrideObserverTarget; // 0x78	
	// MNetworkEnable
	// MNetworkChangeCallback "LocalPlayerExclusive"
	ObserverMode_t m_iOverrideObserverMode; // 0x7c	
	// MNetworkEnable
	int32_t m_iSecondsAfterDeathToAllowObserving; // 0x80	
};

