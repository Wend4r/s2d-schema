#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x880
// Has VTable
// 
// MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
// MNetworkVarNames "int16 m_eCaptureState"
// MNetworkVarNames "int16 m_iPrimaryLane"
// MNetworkVarNames "int16 m_nRopesParity"
// MNetworkVarNames "bool m_bCornerNode"
// MNetworkVarNames "bool m_bCapturable"
// MNetworkVarNames "bool m_bAlwaysUsable"
// MNetworkVarNames "bool m_bOneWay"
// MNetworkVarNames "bool m_bDisableZippingToByPlayers"
// MNetworkVarNames "EHANDLE m_hGuardingBoss"
// MNetworkVarNames "float m_flRopeRadius"
// MNetworkVarNames "bool m_bEnabled"
class CCitadelZipLineNode : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x40]; // 0x810
public:
	// MNetworkEnable
	// MNetworkChangeCallback "connectionsChanged"
	C_NetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // 0x850	
	// MNetworkEnable
	int16_t m_eCaptureState; // 0x868	
	// MNetworkEnable
	int16_t m_iPrimaryLane; // 0x86a	
	// MNetworkEnable
	int16_t m_nRopesParity; // 0x86c	
	// MNetworkEnable
	bool m_bCornerNode; // 0x86e	
	// MNetworkEnable
	bool m_bCapturable; // 0x86f	
	// MNetworkEnable
	bool m_bAlwaysUsable; // 0x870	
	// MNetworkEnable
	bool m_bOneWay; // 0x871	
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers; // 0x872	
private:
	[[maybe_unused]] uint8_t __pad0873[0x1]; // 0x873
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hGuardingBoss; // 0x874	
	// MNetworkEnable
	float m_flRopeRadius; // 0x878	
	// MNetworkEnable
	bool m_bEnabled; // 0x87c	
};

