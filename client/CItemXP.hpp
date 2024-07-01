#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MNetworkVarNames "int m_iParticleParity"
class CItemXP : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x20]; // 0x810
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnParticleParityChanged"
	int32_t m_iParticleParity; // 0x830	
};

