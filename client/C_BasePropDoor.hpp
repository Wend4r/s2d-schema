#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1198
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "DoorState_t m_eDoorState"
// MNetworkVarNames "bool m_bLocked"
// MNetworkVarNames "Vector m_closedPosition"
// MNetworkVarNames "QAngle m_closedAngles"
// MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
class C_BasePropDoor : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad1158[0x10]; // 0x1158
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0x1168	
	bool m_modelChanged; // 0x116c	
	// MNetworkEnable
	bool m_bLocked; // 0x116d	
private:
	[[maybe_unused]] uint8_t __pad116e[0x2]; // 0x116e
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0x1170	
	// MNetworkEnable
	QAngle m_closedAngles; // 0x117c	
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0x1188	
	Vector m_vWhereToSetLightingOrigin; // 0x118c	
};

