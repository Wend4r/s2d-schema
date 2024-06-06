#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xac8
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
	uint32_t m_boneIndexAttached; // 0xa88	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xa8c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xa90	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xa9c	
	bool m_bShouldDetach; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0xf]; // 0xaa9
public:
	bool m_bShouldDeleteAttachedActivationRecord; // 0xab8	
};

