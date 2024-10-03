#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdb0
// Has VTable
// 
// MNetworkVarTypeOverride "CCSObserver_ObserverServices m_pObserverServices"
// MNetworkIncludeByName "m_pObserverServices"
// MNetworkVarTypeOverride "CCSObserver_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarTypeOverride "CCSObserver_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCSObserver_UseServices m_pUseServices"
// MNetworkIncludeByName "m_pUseServices"
// MNetworkVarTypeOverride "CCSObserver_ViewModelServices m_pViewModelServices"
// MNetworkIncludeByName "m_pViewModelServices"
class CCSObserverPawn : public CCSPlayerPawnBase
{
public:
	// Datamap fields:
	// CCSObserver_ObserverServices m_pObserverServices; // 0xa98
	// CCSObserver_MovementServices m_pMovementServices; // 0xac0
	// CCSObserver_UseServices m_pUseServices; // 0xaa8
	// CCSObserver_ViewModelServices m_pViewModelServices; // 0xc80
	// CCSObserver_CameraServices m_pCameraServices; // 0xab8
};

