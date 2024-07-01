#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
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
	[[maybe_unused]] uint8_t __pad0918[0x10]; // 0x918
public:
	// MNetworkEnable
	float m_gravityScale; // 0x928	
	// MNetworkEnable
	float m_linearLimit; // 0x92c	
	// MNetworkEnable
	float m_linearDamping; // 0x930	
	// MNetworkEnable
	float m_angularLimit; // 0x934	
	// MNetworkEnable
	float m_angularDamping; // 0x938	
	// MNetworkEnable
	float m_linearForce; // 0x93c	
	// MNetworkEnable
	float m_flFrequency; // 0x940	
	// MNetworkEnable
	float m_flDampingRatio; // 0x944	
	// MNetworkEnable
	Vector m_vecLinearForcePointAt; // 0x948	
	// MNetworkEnable
	bool m_bCollapseToForcePoint; // 0x954	
private:
	[[maybe_unused]] uint8_t __pad0955[0x3]; // 0x955
public:
	// MNetworkEnable
	Vector m_vecLinearForcePointAtWorld; // 0x958	
	// MNetworkEnable
	Vector m_vecLinearForceDirection; // 0x964	
	// MNetworkEnable
	bool m_bConvertToDebrisWhenPossible; // 0x970	
	
	// Datamap fields:
	// void m_pController; // 0x920
	// CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
};

