#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1408
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "int m_nElectricBeamCasts"
// MNetworkVarNames "ETier3State_t m_eAliveState"
// MNetworkVarNames "ETier3Phase_t m_ePhase"
class C_NPC_Boss_Tier3 : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x13c0	
private:
	[[maybe_unused]] uint8_t __pad13c4[0x4]; // 0x13c4
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnT3Targeting1Changed"
	QAngle m_angTargeting1; // 0x13c8	
private:
	[[maybe_unused]] uint8_t __pad13d4[0xc]; // 0x13d4
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnT3Targeting2Changed"
	QAngle m_angTargeting2; // 0x13e0	
private:
	[[maybe_unused]] uint8_t __pad13ec[0xc]; // 0x13ec
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnT3ElectricBeamCastsChanged"
	int32_t m_nElectricBeamCasts; // 0x13f8	
	// MNetworkEnable
	ETier3State_t m_eAliveState; // 0x13fc	
	// MNetworkEnable
	ETier3Phase_t m_ePhase; // 0x1400	
};

