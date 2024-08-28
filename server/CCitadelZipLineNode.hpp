#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f0
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
class CCitadelZipLineNode : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0748[0x10]; // 0x748
public:
	// MNetworkEnable
	// MNetworkChangeCallback "connectionsChanged"
	CNetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad0770[0x34]; // 0x770
public:
	Vector m_vTangentIn; // 0x7a4	
	Vector m_vTangentOut; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07bc[0x4]; // 0x7bc
public:
	CUtlSymbolLarge m_strGuardBossName; // 0x7c0	
	CUtlSymbolLarge m_strGuardBossName2; // 0x7c8	
	CUtlSymbolLarge m_strGuardBossName3; // 0x7d0	
	// MNetworkEnable
	int16_t m_eCaptureState; // 0x7d8	
	// MNetworkEnable
	int16_t m_iPrimaryLane; // 0x7da	
	// MNetworkEnable
	int16_t m_nRopesParity; // 0x7dc	
	// MNetworkEnable
	bool m_bCornerNode; // 0x7de	
	// MNetworkEnable
	bool m_bCapturable; // 0x7df	
	// MNetworkEnable
	bool m_bAlwaysUsable; // 0x7e0	
	// MNetworkEnable
	bool m_bOneWay; // 0x7e1	
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers; // 0x7e2	
private:
	[[maybe_unused]] uint8_t __pad07e3[0x1]; // 0x7e3
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hGuardingBoss; // 0x7e4	
	// MNetworkEnable
	float m_flRopeRadius; // 0x7e8	
	// MNetworkEnable
	bool m_bEnabled; // 0x7ec	
};

