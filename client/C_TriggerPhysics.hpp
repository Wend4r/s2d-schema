#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd80
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
	float m_gravityScale; // 0xd30	
	// MNetworkEnable
	float m_linearLimit; // 0xd34	
	// MNetworkEnable
	float m_linearDamping; // 0xd38	
	// MNetworkEnable
	float m_angularLimit; // 0xd3c	
	// MNetworkEnable
	float m_angularDamping; // 0xd40	
	// MNetworkEnable
	float m_linearForce; // 0xd44	
	// MNetworkEnable
	float m_flFrequency; // 0xd48	
	// MNetworkEnable
	float m_flDampingRatio; // 0xd4c	
	// MNetworkEnable
	Vector m_vecLinearForcePointAt; // 0xd50	
	// MNetworkEnable
	bool m_bCollapseToForcePoint; // 0xd5c	
private:
	[[maybe_unused]] uint8_t __pad0d5d[0x3]; // 0xd5d
public:
	// MNetworkEnable
	Vector m_vecLinearForcePointAtWorld; // 0xd60	
	// MNetworkEnable
	Vector m_vecLinearForceDirection; // 0xd6c	
	// MNetworkEnable
	bool m_bConvertToDebrisWhenPossible; // 0xd78	
};

