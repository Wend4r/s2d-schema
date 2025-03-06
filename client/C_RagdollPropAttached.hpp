#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbb0
// Has VTable
// 
// MNetworkVarNames "uint32 m_boneIndexAttached"
// MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
// MNetworkVarNames "Vector m_attachmentPointBoneSpace"
// MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
class C_RagdollPropAttached : public C_RagdollProp
{
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; // 0xb78	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xb7c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xb80	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xb8c	
	Vector m_vecOffset; // 0xb98	
	float m_parentTime; // 0xba4	
	bool m_bHasParent; // 0xba8	
};

