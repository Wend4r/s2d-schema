#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
// 
// MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
// MNetworkVarNames "Vector m_vTangentIn"
// MNetworkVarNames "Vector m_vTangentOut"
// MNetworkVarNames "float m_flCumulativeDistance"
// MNetworkVarNames "int16 m_iNodeIndex"
// MNetworkVarNames "int16 m_eCaptureState"
// MNetworkVarNames "int16 m_iPrimaryLane"
// MNetworkVarNames "int16 m_nRopesParity"
// MNetworkVarNames "bool m_bCornerNode"
// MNetworkVarNames "bool m_bCapturable"
// MNetworkVarNames "bool m_bAlwaysUsable"
// MNetworkVarNames "bool m_bOneWay"
// MNetworkVarNames "bool m_bDisableZippingToByPlayers"
// MNetworkVarNames "bool m_bUseForMinimapDrawing"
// MNetworkVarNames "EHANDLE m_hGuardingBoss"
// MNetworkVarNames "float m_flRopeRadius"
// MNetworkVarNames "bool m_bEnabled"
class CCitadelZipLineNode : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0808[0x40]; // 0x808
public:
	// MNetworkEnable
	// MNetworkChangeCallback "connectionsChanged"
	C_NetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // 0x848	
	// MNetworkEnable
	Vector m_vTangentIn; // 0x860	
	// MNetworkEnable
	Vector m_vTangentOut; // 0x86c	
	// MNetworkEnable
	float m_flCumulativeDistance; // 0x878	
	// MNetworkEnable
	int16_t m_iNodeIndex; // 0x87c	
	// MNetworkEnable
	int16_t m_eCaptureState; // 0x87e	
	// MNetworkEnable
	int16_t m_iPrimaryLane; // 0x880	
	// MNetworkEnable
	int16_t m_nRopesParity; // 0x882	
	// MNetworkEnable
	bool m_bCornerNode; // 0x884	
	// MNetworkEnable
	bool m_bCapturable; // 0x885	
	// MNetworkEnable
	bool m_bAlwaysUsable; // 0x886	
	// MNetworkEnable
	bool m_bOneWay; // 0x887	
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers; // 0x888	
	// MNetworkEnable
	bool m_bUseForMinimapDrawing; // 0x889	
private:
	[[maybe_unused]] uint8_t __pad088a[0x2]; // 0x88a
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hGuardingBoss; // 0x88c	
	// MNetworkEnable
	float m_flRopeRadius; // 0x890	
	// MNetworkEnable
	bool m_bEnabled; // 0x894	
};

