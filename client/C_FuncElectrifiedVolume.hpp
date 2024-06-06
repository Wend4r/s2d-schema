#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
// MNetworkVarNames "bool m_bState"
class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0ccc[0x4]; // 0xccc
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0xcd0	
	// MNetworkEnable
	bool m_bState; // 0xcd8	
};

