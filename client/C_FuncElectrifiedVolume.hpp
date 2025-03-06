#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
// MNetworkVarNames "bool m_bState"
class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0x808	
private:
	[[maybe_unused]] uint8_t __pad080c[0x4]; // 0x80c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x810	
	// MNetworkEnable
	bool m_bState; // 0x818	
};

