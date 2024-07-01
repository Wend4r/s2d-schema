#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
// 
// MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
class CRagdollManager : public CBaseEntity
{
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	int32_t m_iMaxRagdollCount; // 0x4bc	
	bool m_bSaveImportant; // 0x4c0	
	
	// Datamap fields:
	// int32_t InputSetMaxRagdollCount; // 0x0
};

