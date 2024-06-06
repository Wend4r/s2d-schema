#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1468
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
class C_CSObserverPawn : public C_CSPlayerPawnBase
{
public:
	CEntityHandle m_hDetectParentChange; // 0x1460	
	
	// Datamap fields:
	// CCSObserver_ObserverServices m_pObserverServices; // 0x1110
	// CCSObserver_MovementServices m_pMovementServices; // 0x1138
	// CCSObserver_UseServices m_pUseServices; // 0x1120
	// CCSObserver_ViewModelServices m_pViewModelServices; // 0x12b8
	// CCSObserver_CameraServices m_pCameraServices; // 0x1130
};

