#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1268
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
	[[maybe_unused]] uint8_t __pad1228[0x10]; // 0x1228
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0x1238	
	bool m_modelChanged; // 0x123c	
	// MNetworkEnable
	bool m_bLocked; // 0x123d	
private:
	[[maybe_unused]] uint8_t __pad123e[0x2]; // 0x123e
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0x1240	
	// MNetworkEnable
	QAngle m_closedAngles; // 0x124c	
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0x1258	
	Vector m_vWhereToSetLightingOrigin; // 0x125c	
};

