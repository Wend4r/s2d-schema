#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "int m_iOpvarIndex"
// MNetworkVarNames "bool m_bUseAutoCompare"
class CSoundOpvarSetPointBase : public CBaseEntity
{
public:
	bool m_bDisabled; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	CEntityHandle m_hSource; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f8[0x50]; // 0x4f8
public:
	Vector m_vLastPosition; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x558	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x560	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x568	
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x570	
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x574	
	
	// Datamap fields:
	// uint64_t InputSetEventGuid; // 0x0
	// CUtlSymbolLarge InputSetStackName; // 0x0
	// CUtlSymbolLarge InputSetOperatorName; // 0x0
	// CUtlSymbolLarge InputSetOpvarName; // 0x0
	// CUtlSymbolLarge InputSetOpvarIndex; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CSoundOpvarSetPointBaseSetOpvarThink; // 0x0
	// void m_nGUID; // 0x4e8
	// void m_hOpvarData; // 0x4f8
};

