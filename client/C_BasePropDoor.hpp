#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1260
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
	[[maybe_unused]] uint8_t __pad1220[0x10]; // 0x1220
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0x1230	
	bool m_modelChanged; // 0x1234	
	// MNetworkEnable
	bool m_bLocked; // 0x1235	
private:
	[[maybe_unused]] uint8_t __pad1236[0x2]; // 0x1236
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0x1238	
	// MNetworkEnable
	QAngle m_closedAngles; // 0x1244	
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0x1250	
	Vector m_vWhereToSetLightingOrigin; // 0x1254	
};

