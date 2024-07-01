#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "string_t m_iszSoundAreaType"
// MNetworkVarNames "Vector m_vPos"
class CSoundAreaEntityBase : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x7]; // 0x4b9
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x4c0	
	// MNetworkEnable
	Vector m_vPos; // 0x4c8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

