#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
// 
// MNetworkVarNames "int m_iParticleParity"
class CItemXP : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0748[0x34]; // 0x748
public:
	// MNetworkEnable
	int32_t m_iParticleParity; // 0x77c	
};

