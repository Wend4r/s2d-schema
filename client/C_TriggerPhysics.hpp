#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
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
class C_TriggerPhysics : public C_BaseTrigger
{
public:
	// MNetworkEnable
	float m_gravityScale; // 0xd28	
	// MNetworkEnable
	float m_linearLimit; // 0xd2c	
	// MNetworkEnable
	float m_linearDamping; // 0xd30	
	// MNetworkEnable
	float m_angularLimit; // 0xd34	
	// MNetworkEnable
	float m_angularDamping; // 0xd38	
	// MNetworkEnable
	float m_linearForce; // 0xd3c	
	// MNetworkEnable
	float m_flFrequency; // 0xd40	
	// MNetworkEnable
	float m_flDampingRatio; // 0xd44	
	// MNetworkEnable
	Vector m_vecLinearForcePointAt; // 0xd48	
	// MNetworkEnable
	bool m_bCollapseToForcePoint; // 0xd54	
private:
	[[maybe_unused]] uint8_t __pad0d55[0x3]; // 0xd55
public:
	// MNetworkEnable
	Vector m_vecLinearForcePointAtWorld; // 0xd58	
	// MNetworkEnable
	Vector m_vecLinearForceDirection; // 0xd64	
	// MNetworkEnable
	bool m_bConvertToDebrisWhenPossible; // 0xd70	
};

