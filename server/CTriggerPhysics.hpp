#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x940
// Has VTable
// 
// MNetworkVarNames "float m_gravityScale"
// MNetworkVarNames "float m_linearLimit"
// MNetworkVarNames "float m_linearDamping"
// MNetworkVarNames "float m_angularLimit"
// MNetworkVarNames "float m_angularDamping"
// MNetworkVarNames "float m_linearForce"
// MNetworkVarNames "float m_flFrequency"
// MNetworkVarNames "float m_flDampingRatio"
// MNetworkVarNames "Vector m_vecLinearForcePointAt"
// MNetworkVarNames "bool m_bCollapseToForcePoint"
// MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
// MNetworkVarNames "Vector m_vecLinearForceDirection"
// MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
class CTriggerPhysics : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad08e0[0x10]; // 0x8e0
public:
	// MNetworkEnable
	float m_gravityScale; // 0x8f0	
	// MNetworkEnable
	float m_linearLimit; // 0x8f4	
	// MNetworkEnable
	float m_linearDamping; // 0x8f8	
	// MNetworkEnable
	float m_angularLimit; // 0x8fc	
	// MNetworkEnable
	float m_angularDamping; // 0x900	
	// MNetworkEnable
	float m_linearForce; // 0x904	
	// MNetworkEnable
	float m_flFrequency; // 0x908	
	// MNetworkEnable
	float m_flDampingRatio; // 0x90c	
	// MNetworkEnable
	Vector m_vecLinearForcePointAt; // 0x910	
	// MNetworkEnable
	bool m_bCollapseToForcePoint; // 0x91c	
private:
	[[maybe_unused]] uint8_t __pad091d[0x3]; // 0x91d
public:
	// MNetworkEnable
	Vector m_vecLinearForcePointAtWorld; // 0x920	
	// MNetworkEnable
	Vector m_vecLinearForceDirection; // 0x92c	
	// MNetworkEnable
	bool m_bConvertToDebrisWhenPossible; // 0x938	
	
	// Datamap fields:
	// void m_pController; // 0x8e8
	// CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
};

