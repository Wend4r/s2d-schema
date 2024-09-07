#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd70
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
	[[maybe_unused]] uint8_t __pad0d30[0x10]; // 0xd30
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xd40	
	bool m_modelChanged; // 0xd44	
	// MNetworkEnable
	bool m_bLocked; // 0xd45	
private:
	[[maybe_unused]] uint8_t __pad0d46[0x2]; // 0xd46
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xd48	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xd54	
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0xd60	
	Vector m_vWhereToSetLightingOrigin; // 0xd64	
};

