#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x840
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class C_BaseButton : public C_BaseToggle
{
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; // 0x830	
	// MNetworkEnable
	bool m_usable; // 0x834	
private:
	[[maybe_unused]] uint8_t __pad0835[0x3]; // 0x835
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x838	
};

