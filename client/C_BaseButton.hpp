#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class C_BaseButton : public C_BaseToggle
{
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; // 0x808	
	// MNetworkEnable
	bool m_usable; // 0x80c	
private:
	[[maybe_unused]] uint8_t __pad080d[0x3]; // 0x80d
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x810	
};

