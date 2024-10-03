#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf90
// Has VTable
class C_KeychainModule : public C_CS2WeaponModuleBase
{
public:
	uint32_t m_nKeychainDefID; // 0xf88	
	uint32_t m_nKeychainSeed; // 0xf8c	
};

