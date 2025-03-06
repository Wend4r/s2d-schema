#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x870
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
class CCitadelZipLineNode : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad07b8[0x10]; // 0x7b8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "connectionsChanged"
	CNetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // 0x7c8	
	// MNetworkEnable
	Vector m_vTangentIn; // 0x7e0	
	// MNetworkEnable
	Vector m_vTangentOut; // 0x7ec	
	// MNetworkEnable
	float m_flCumulativeDistance; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad07fc[0x3c]; // 0x7fc
public:
	CUtlSymbolLarge m_strGuardBossName; // 0x838	
	CUtlSymbolLarge m_strGuardBossName2; // 0x840	
	CUtlSymbolLarge m_strGuardBossName3; // 0x848	
	// MNetworkEnable
	int16_t m_iNodeIndex; // 0x850	
	// MNetworkEnable
	int16_t m_eCaptureState; // 0x852	
	// MNetworkEnable
	int16_t m_iPrimaryLane; // 0x854	
	// MNetworkEnable
	int16_t m_nRopesParity; // 0x856	
	// MNetworkEnable
	bool m_bCornerNode; // 0x858	
	// MNetworkEnable
	bool m_bCapturable; // 0x859	
	// MNetworkEnable
	bool m_bAlwaysUsable; // 0x85a	
	// MNetworkEnable
	bool m_bOneWay; // 0x85b	
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers; // 0x85c	
	// MNetworkEnable
	bool m_bUseForMinimapDrawing; // 0x85d	
private:
	[[maybe_unused]] uint8_t __pad085e[0x2]; // 0x85e
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hGuardingBoss; // 0x860	
	// MNetworkEnable
	float m_flRopeRadius; // 0x864	
	// MNetworkEnable
	bool m_bEnabled; // 0x868	
};

