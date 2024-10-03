#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
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
class CPlayerSprayDecal : public CModelPointEntity
{
public:
	// MNetworkEnable
	int32_t m_nUniqueID; // 0x750	
	// MNetworkEnable
	uint32_t m_unAccountID; // 0x754	
	// MNetworkEnable
	uint32_t m_unTraceID; // 0x758	
	// MNetworkEnable
	uint32_t m_rtGcTime; // 0x75c	
	// MNetworkEnable
	Vector m_vecEndPos; // 0x760	
	// MNetworkEnable
	Vector m_vecStart; // 0x76c	
	// MNetworkEnable
	Vector m_vecLeft; // 0x778	
	// MNetworkEnable
	Vector m_vecNormal; // 0x784	
	// MNetworkEnable
	int32_t m_nPlayer; // 0x790	
	// MNetworkEnable
	int32_t m_nEntity; // 0x794	
	// MNetworkEnable
	int32_t m_nHitbox; // 0x798	
	// MNetworkEnable
	float m_flCreationTime; // 0x79c	
	// MNetworkEnable
	int32_t m_nTintID; // 0x7a0	
	// MNetworkEnable
	uint8_t m_nVersion; // 0x7a4	
	// MNetworkEnable
	uint8_t m_ubSignature[128]; // 0x7a5	
	
	// Static fields:
	static CUtlVector< CPlayerSprayDecal* > &Get_s_arrFEPlayerDecals(){return *reinterpret_cast<CUtlVector< CPlayerSprayDecal* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPlayerSprayDecal")->m_static_fields[0]->m_instance);};
};

