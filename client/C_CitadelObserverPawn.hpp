#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe80
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkVarTypeOverride "CCitadelPlayer_ObserverServices m_pObserverServices"
// MNetworkIncludeByName "m_pObserverServices"
// MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCitadelObserver_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
class C_CitadelObserverPawn : public CCitadelPlayerPawnBase
{
public:
	// Datamap fields:
	// CCitadelPlayer_ObserverServices m_pObserverServices; // 0xcc8
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xce8
	// CCitadelObserver_MovementServices m_pMovementServices; // 0xcf0
};

