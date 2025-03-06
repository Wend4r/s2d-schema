#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde0
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
// MNetworkVarNames "bool m_bNoNPCs"
// MNetworkVarNames "Vector m_closedPosition"
// MNetworkVarNames "QAngle m_closedAngles"
// MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
class C_BasePropDoor : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0da0[0x10]; // 0xda0
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xdb0	
	bool m_modelChanged; // 0xdb4	
	// MNetworkEnable
	bool m_bLocked; // 0xdb5	
	// MNetworkEnable
	bool m_bNoNPCs; // 0xdb6	
private:
	[[maybe_unused]] uint8_t __pad0db7[0x1]; // 0xdb7
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xdb8	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xdc4	
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0xdd0	
	Vector m_vWhereToSetLightingOrigin; // 0xdd4	
};

