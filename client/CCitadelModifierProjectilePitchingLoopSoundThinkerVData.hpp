#pragma once

#include <cstdint>

struct CRemapFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierProjectilePitchingLoopSoundThinkerVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Audio"
	// MPropertyDescription "Remap values from Speed to Pitch (MinSpeed, MaxSpeed, MinSpeedPitch, MaxSpeedPitch)"
	CRemapFloat m_speedToPitchRemap; // 0x5f0	
};

