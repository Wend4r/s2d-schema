#pragma once

#include <cstdint>

struct CPlayerSprayDecalRenderHelper;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe38
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
	int32_t m_nUniqueID; // 0xd28	
	// MNetworkEnable
	uint32_t m_unAccountID; // 0xd2c	
	// MNetworkEnable
	uint32_t m_unTraceID; // 0xd30	
	// MNetworkEnable
	uint32_t m_rtGcTime; // 0xd34	
	// MNetworkEnable
	Vector m_vecEndPos; // 0xd38	
	// MNetworkEnable
	Vector m_vecStart; // 0xd44	
	// MNetworkEnable
	Vector m_vecLeft; // 0xd50	
	// MNetworkEnable
	Vector m_vecNormal; // 0xd5c	
	// MNetworkEnable
	int32_t m_nPlayer; // 0xd68	
	// MNetworkEnable
	int32_t m_nEntity; // 0xd6c	
	// MNetworkEnable
	int32_t m_nHitbox; // 0xd70	
	// MNetworkEnable
	float m_flCreationTime; // 0xd74	
	// MNetworkEnable
	int32_t m_nTintID; // 0xd78	
	// MNetworkEnable
	uint8_t m_nVersion; // 0xd7c	
	// MNetworkEnable
	uint8_t m_ubSignature[128]; // 0xd7d	
private:
	[[maybe_unused]] uint8_t __pad0dfd[0xb]; // 0xdfd
public:
	CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xe08	
};

