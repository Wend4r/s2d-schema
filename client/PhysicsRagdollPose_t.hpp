#pragma once

#include <cstdint>

struct CNetworkVarChainer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x70
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
	C_NetworkUtlVectorBase< CTransform > m_Transforms; // 0x30	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOwner; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x1c]; // 0x4c
public:
	bool m_bDirty; // 0x68	
};

