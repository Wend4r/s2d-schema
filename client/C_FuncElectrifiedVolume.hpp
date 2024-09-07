#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
// MNetworkVarNames "bool m_bState"
class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0834[0x4]; // 0x834
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x838	
	// MNetworkEnable
	bool m_bState; // 0x840	
};

