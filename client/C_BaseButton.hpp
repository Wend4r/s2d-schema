#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd30
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class C_BaseButton : public C_BaseToggle
{
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; // 0xd20	
	// MNetworkEnable
	bool m_usable; // 0xd24	
private:
	[[maybe_unused]] uint8_t __pad0d25[0x3]; // 0xd25
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0xd28	
};

