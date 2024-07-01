#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd50
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
	[[maybe_unused]] uint8_t __pad0d10[0x10]; // 0xd10
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xd20	
	bool m_modelChanged; // 0xd24	
	// MNetworkEnable
	bool m_bLocked; // 0xd25	
private:
	[[maybe_unused]] uint8_t __pad0d26[0x2]; // 0xd26
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xd28	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xd34	
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0xd40	
	Vector m_vWhereToSetLightingOrigin; // 0xd44	
};

