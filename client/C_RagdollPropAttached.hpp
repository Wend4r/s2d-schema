#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb40
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
	uint32_t m_boneIndexAttached; // 0xb08	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xb0c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xb10	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xb1c	
	Vector m_vecOffset; // 0xb28	
	float m_parentTime; // 0xb34	
	bool m_bHasParent; // 0xb38	
};

