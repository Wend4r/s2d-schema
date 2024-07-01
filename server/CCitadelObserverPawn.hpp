#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc28
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
class CCitadelObserverPawn : public CCitadelPlayerPawnBase
{
public:
	// Datamap fields:
	// CCitadelPlayer_ObserverServices m_pObserverServices; // 0xa90
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xab0
	// CCitadelObserver_MovementServices m_pMovementServices; // 0xab8
};

