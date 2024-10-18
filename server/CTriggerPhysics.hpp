#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
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
	[[maybe_unused]] uint8_t __pad0960[0x10]; // 0x960
public:
	// MNetworkEnable
	float m_gravityScale; // 0x970	
	// MNetworkEnable
	float m_linearLimit; // 0x974	
	// MNetworkEnable
	float m_linearDamping; // 0x978	
	// MNetworkEnable
	float m_angularLimit; // 0x97c	
	// MNetworkEnable
	float m_angularDamping; // 0x980	
	// MNetworkEnable
	float m_linearForce; // 0x984	
	// MNetworkEnable
	float m_flFrequency; // 0x988	
	// MNetworkEnable
	float m_flDampingRatio; // 0x98c	
	// MNetworkEnable
	Vector m_vecLinearForcePointAt; // 0x990	
	// MNetworkEnable
	bool m_bCollapseToForcePoint; // 0x99c	
private:
	[[maybe_unused]] uint8_t __pad099d[0x3]; // 0x99d
public:
	// MNetworkEnable
	Vector m_vecLinearForcePointAtWorld; // 0x9a0	
	// MNetworkEnable
	Vector m_vecLinearForceDirection; // 0x9ac	
	// MNetworkEnable
	bool m_bConvertToDebrisWhenPossible; // 0x9b8	
	
	// Datamap fields:
	// void m_pController; // 0x968
	// CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
};

