#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
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
	float m_gravityScale; // 0xcd0	
	// MNetworkEnable
	float m_linearLimit; // 0xcd4	
	// MNetworkEnable
	float m_linearDamping; // 0xcd8	
	// MNetworkEnable
	float m_angularLimit; // 0xcdc	
	// MNetworkEnable
	float m_angularDamping; // 0xce0	
	// MNetworkEnable
	float m_linearForce; // 0xce4	
	// MNetworkEnable
	float m_flFrequency; // 0xce8	
	// MNetworkEnable
	float m_flDampingRatio; // 0xcec	
	// MNetworkEnable
	Vector m_vecLinearForcePointAt; // 0xcf0	
	// MNetworkEnable
	bool m_bCollapseToForcePoint; // 0xcfc	
private:
	[[maybe_unused]] uint8_t __pad0cfd[0x3]; // 0xcfd
public:
	// MNetworkEnable
	Vector m_vecLinearForcePointAtWorld; // 0xd00	
	// MNetworkEnable
	Vector m_vecLinearForceDirection; // 0xd0c	
	// MNetworkEnable
	bool m_bConvertToDebrisWhenPossible; // 0xd18	
};

