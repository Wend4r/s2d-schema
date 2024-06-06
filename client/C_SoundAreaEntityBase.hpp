#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x570
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "string_t m_iszSoundAreaType"
// MNetworkVarNames "Vector m_vPos"
class C_SoundAreaEntityBase : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x7]; // 0x549
public:
	bool m_bWasEnabled; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0551[0x7]; // 0x551
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x558	
	// MNetworkEnable
	Vector m_vPos; // 0x560	
	
	// Datamap fields:
	// void m_nGUID; // 0x54c
};

