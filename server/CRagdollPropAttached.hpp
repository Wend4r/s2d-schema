#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
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
	uint32_t m_boneIndexAttached; // 0xb48	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xb4c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xb50	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xb5c	
	bool m_bShouldDetach; // 0xb68	
private:
	[[maybe_unused]] uint8_t __pad0b69[0xf]; // 0xb69
public:
	bool m_bShouldDeleteAttachedActivationRecord; // 0xb78	
};

