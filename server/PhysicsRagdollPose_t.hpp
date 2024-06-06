#pragma once

#include <cstdint>

struct CNetworkVarChainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CTransform m_Transforms"
// MNetworkVarNames "EHANDLE m_hOwner"
struct PhysicsRagdollPose_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTransformChanged"
	CNetworkUtlVectorBase< CTransform > m_Transforms; // 0x30	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOwner; // 0x48	
};

