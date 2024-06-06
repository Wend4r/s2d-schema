#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
// 
// MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
class CRagdollManager : public CBaseEntity
{
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	int32_t m_iMaxRagdollCount; // 0x4c4	
	bool m_bSaveImportant; // 0x4c8	
	
	// Datamap fields:
	// int32_t InputSetMaxRagdollCount; // 0x0
};

