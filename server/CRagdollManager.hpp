#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
// 
// MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
class CRagdollManager : public CBaseEntity
{
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	int32_t m_iMaxRagdollCount; // 0x4e4	
	bool m_bSaveImportant; // 0x4e8	
	bool m_bCanTakeDamage; // 0x4e9	
	
	// Datamap fields:
	// int32_t InputSetMaxRagdollCount; // 0x0
};

