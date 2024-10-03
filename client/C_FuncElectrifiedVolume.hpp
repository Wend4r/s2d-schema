#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd38
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
// MNetworkVarNames "bool m_bState"
class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0xd20	
private:
	[[maybe_unused]] uint8_t __pad0d24[0x4]; // 0xd24
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0xd28	
	// MNetworkEnable
	bool m_bState; // 0xd30	
};

