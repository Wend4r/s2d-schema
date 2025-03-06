#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
// 
// MNetworkVarNames "uint32 m_boneIndexAttached"
// MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
// MNetworkVarNames "Vector m_attachmentPointBoneSpace"
// MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
class CRagdollPropAttached : public CRagdollProp
{
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; // 0xc48	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xc4c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xc50	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xc5c	
	bool m_bShouldDetach; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c69[0xf]; // 0xc69
public:
	bool m_bShouldDeleteAttachedActivationRecord; // 0xc78	
};

