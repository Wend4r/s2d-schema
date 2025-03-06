#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1990
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "GameTime_t m_flFadeOutStart"
// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
// MNetworkVarNames "Vector m_vecElectricBeamLookTarget"
// MNetworkVarNames "int m_nElectricBeamCasts"
class CNPC_Boss_Tier2 : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1890[0x18]; // 0x1890
public:
	Vector m_vecStartingPosition; // 0x18a8	
	// MNetworkEnable
	int32_t m_iLane; // 0x18b4	
private:
	[[maybe_unused]] uint8_t __pad18b8[0x8]; // 0x18b8
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetedEnemy; // 0x18c0	
	// MNetworkEnable
	GameTime_t m_flFadeOutStart; // 0x18c4	
	// MNetworkEnable
	GameTime_t m_flFadeOutEnd; // 0x18c8	
private:
	[[maybe_unused]] uint8_t __pad18cc[0x24]; // 0x18cc
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecElectricBeamLookTarget; // 0x18f0	
	// MNetworkEnable
	int32_t m_nElectricBeamCasts; // 0x18fc	
private:
	[[maybe_unused]] uint8_t __pad1900[0x28]; // 0x1900
public:
	CEntityIOOutput m_eventOnBossKilled; // 0x1928	
	
	// Datamap fields:
	// CUtlSymbolLarge m_strBossEntityName; // 0x1958
};

