#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
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
	bool m_bDisabled; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x7]; // 0x539
public:
	bool m_bWasEnabled; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x7]; // 0x541
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x548	
	// MNetworkEnable
	Vector m_vPos; // 0x550	
	
	// Datamap fields:
	// void m_nGUID; // 0x53c
};

