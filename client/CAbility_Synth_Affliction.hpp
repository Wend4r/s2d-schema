#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd58
// Has VTable
// 
// MNetworkVarNames "int m_nBonusTechPower"
class CAbility_Synth_Affliction : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca4[0xac]; // 0xca4
public:
	ParticleIndex_t m_hAOEParticle; // 0xd50	
};

