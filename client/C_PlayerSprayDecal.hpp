#pragma once

#include <cstdint>

struct CPlayerSprayDecalRenderHelper;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
// 
// MNetworkVarNames "int m_nUniqueID"
// MNetworkVarNames "uint32 m_unAccountID"
// MNetworkVarNames "uint32 m_unTraceID"
// MNetworkVarNames "uint32 m_rtGcTime"
// MNetworkVarNames "Vector m_vecEndPos"
// MNetworkVarNames "Vector m_vecStart"
// MNetworkVarNames "Vector m_vecLeft"
// MNetworkVarNames "Vector m_vecNormal"
// MNetworkVarNames "int m_nPlayer"
// MNetworkVarNames "int m_nEntity"
// MNetworkVarNames "int m_nHitbox"
// MNetworkVarNames "float m_flCreationTime"
// MNetworkVarNames "int m_nTintID"
// MNetworkVarNames "uint8 m_nVersion"
// MNetworkVarNames "uint8 m_ubSignature"
class C_PlayerSprayDecal : public C_ModelPointEntity
{
public:
	// MNetworkEnable
	int32_t m_nUniqueID; // 0xcc8	
	// MNetworkEnable
	uint32_t m_unAccountID; // 0xccc	
	// MNetworkEnable
	uint32_t m_unTraceID; // 0xcd0	
	// MNetworkEnable
	uint32_t m_rtGcTime; // 0xcd4	
	// MNetworkEnable
	Vector m_vecEndPos; // 0xcd8	
	// MNetworkEnable
	Vector m_vecStart; // 0xce4	
	// MNetworkEnable
	Vector m_vecLeft; // 0xcf0	
	// MNetworkEnable
	Vector m_vecNormal; // 0xcfc	
	// MNetworkEnable
	int32_t m_nPlayer; // 0xd08	
	// MNetworkEnable
	int32_t m_nEntity; // 0xd0c	
	// MNetworkEnable
	int32_t m_nHitbox; // 0xd10	
	// MNetworkEnable
	float m_flCreationTime; // 0xd14	
	// MNetworkEnable
	int32_t m_nTintID; // 0xd18	
	// MNetworkEnable
	uint8_t m_nVersion; // 0xd1c	
	// MNetworkEnable
	uint8_t m_ubSignature[128]; // 0xd1d	
private:
	[[maybe_unused]] uint8_t __pad0d9d[0xb]; // 0xd9d
public:
	CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xda8	
};

