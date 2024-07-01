#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
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
	bool m_bDisabled; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	CEntityHandle m_hSource; // 0x4bc	
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04d0[0x50]; // 0x4d0
public:
	Vector m_vLastPosition; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad052c[0x4]; // 0x52c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x530	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x538	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x540	
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x548	
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x54c	
	
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
	// void m_nGUID; // 0x4c0
	// void m_hOpvarData; // 0x4d0
};

