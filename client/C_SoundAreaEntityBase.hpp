#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
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
	bool m_bDisabled; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x7]; // 0x511
public:
	bool m_bWasEnabled; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x7]; // 0x519
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x520	
	// MNetworkEnable
	Vector m_vPos; // 0x528	
	
	// Datamap fields:
	// void m_nGUID; // 0x514
};

