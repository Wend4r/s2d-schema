#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1950
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "QAngle m_angTargeting1"
// MNetworkVarNames "QAngle m_angTargeting2"
// MNetworkVarNames "int m_nElectricBeamCasts"
// MNetworkVarNames "ETier3State_t m_eAliveState"
// MNetworkVarNames "ETier3Phase_t m_ePhase"
class CNPC_Boss_Tier3 : public CAI_CitadelNPC
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x1890	
private:
	[[maybe_unused]] uint8_t __pad1894[0x34]; // 0x1894
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	QAngle m_angTargeting1; // 0x18c8	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	QAngle m_angTargeting2; // 0x18d4	
	// MNetworkEnable
	int32_t m_nElectricBeamCasts; // 0x18e0	
private:
	[[maybe_unused]] uint8_t __pad18e4[0x24]; // 0x18e4
public:
	CEntityIOOutput m_eventOnBossKilled; // 0x1908	
	CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x1930	
private:
	[[maybe_unused]] uint8_t __pad1938[0x4]; // 0x1938
public:
	// MNetworkEnable
	ETier3State_t m_eAliveState; // 0x193c	
private:
	[[maybe_unused]] uint8_t __pad1940[0x4]; // 0x1940
public:
	// MNetworkEnable
	ETier3Phase_t m_ePhase; // 0x1944	
	
	// Datamap fields:
	// void m_vecStartingPosition; // 0x18a0
	// int32_t m_nDyingEndCoverPointID; // 0x18b0
	// int32_t m_nVulnerableCoverPointID; // 0x18b4
};

