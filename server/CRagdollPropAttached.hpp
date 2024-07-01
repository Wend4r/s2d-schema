#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb38
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
	uint32_t m_boneIndexAttached; // 0xaf8	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xafc	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xb00	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xb0c	
	bool m_bShouldDetach; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b19[0xf]; // 0xb19
public:
	bool m_bShouldDeleteAttachedActivationRecord; // 0xb28	
};

