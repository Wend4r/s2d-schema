#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb8
// Has VTable
// 
// MNetworkVarNames "int m_nBonusTechPower"
class CAbility_Synth_Affliction : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0xac]; // 0xb04
public:
	ParticleIndex_t m_hAOEParticle; // 0xbb0	
};

