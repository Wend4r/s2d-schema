#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MNetworkVarNames "bool m_bAlignCameraOnAutoDismount"
class CCitadelClimbRopeTrigger : public CBaseTrigger
{
public:
	// MNetworkEnable
	bool m_bAlignCameraOnAutoDismount; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x3]; // 0x979
public:
	CUtlStringToken m_tModifier; // 0x97c	
};

