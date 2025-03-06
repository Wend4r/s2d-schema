#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
// 
// MNetworkVarNames "int m_nBonusTechPower"
class CAbility_Synth_Affliction : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c54[0xac]; // 0xc54
public:
	ParticleIndex_t m_hAOEParticle; // 0xd00	
};

