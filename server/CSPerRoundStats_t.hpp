#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MNetworkVarNames "int m_iKills"
// MNetworkVarNames "int m_iDeaths"
// MNetworkVarNames "int m_iAssists"
// MNetworkVarNames "int m_iDamage"
// MNetworkVarNames "int m_iEquipmentValue"
// MNetworkVarNames "int m_iMoneySaved"
// MNetworkVarNames "int m_iKillReward"
// MNetworkVarNames "int m_iLiveTime"
// MNetworkVarNames "int m_iHeadShotKills"
// MNetworkVarNames "int m_iObjective"
// MNetworkVarNames "int m_iCashEarned"
// MNetworkVarNames "int m_iUtilityDamage"
// MNetworkVarNames "int m_iEnemiesFlashed"
struct CSPerRoundStats_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	int32_t m_iKills; // 0x30	
	// MNetworkEnable
	int32_t m_iDeaths; // 0x34	
	// MNetworkEnable
	int32_t m_iAssists; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iDamage; // 0x3c	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iEquipmentValue; // 0x40	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iMoneySaved; // 0x44	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iKillReward; // 0x48	
	// MNetworkEnable
	int32_t m_iLiveTime; // 0x4c	
	// MNetworkEnable
	int32_t m_iHeadShotKills; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iObjective; // 0x54	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iCashEarned; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iUtilityDamage; // 0x5c	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iEnemiesFlashed; // 0x60	
};

