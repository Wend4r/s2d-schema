#pragma once

#include <cstdint>

struct CPlayerSprayDecalRenderHelper;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
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
	int32_t m_nUniqueID; // 0xd20	
	// MNetworkEnable
	uint32_t m_unAccountID; // 0xd24	
	// MNetworkEnable
	uint32_t m_unTraceID; // 0xd28	
	// MNetworkEnable
	uint32_t m_rtGcTime; // 0xd2c	
	// MNetworkEnable
	Vector m_vecEndPos; // 0xd30	
	// MNetworkEnable
	Vector m_vecStart; // 0xd3c	
	// MNetworkEnable
	Vector m_vecLeft; // 0xd48	
	// MNetworkEnable
	Vector m_vecNormal; // 0xd54	
	// MNetworkEnable
	int32_t m_nPlayer; // 0xd60	
	// MNetworkEnable
	int32_t m_nEntity; // 0xd64	
	// MNetworkEnable
	int32_t m_nHitbox; // 0xd68	
	// MNetworkEnable
	float m_flCreationTime; // 0xd6c	
	// MNetworkEnable
	int32_t m_nTintID; // 0xd70	
	// MNetworkEnable
	uint8_t m_nVersion; // 0xd74	
	// MNetworkEnable
	uint8_t m_ubSignature[128]; // 0xd75	
private:
	[[maybe_unused]] uint8_t __pad0df5[0xb]; // 0xdf5
public:
	CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xe00	
};

