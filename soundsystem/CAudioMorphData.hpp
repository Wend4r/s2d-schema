#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x68
// 
// MGetKV3ClassDefaults
class CAudioMorphData
{
public:
	CUtlVector< float32 > m_times; // 0x0	
	CUtlVector< uint32 > m_nameHashCodes; // 0x18	
	CUtlVector< CUtlString > m_nameStrings; // 0x30	
	CUtlVector< CUtlVector< float32 > > m_samples; // 0x48	
	float m_flEaseIn; // 0x60	
	float m_flEaseOut; // 0x64	
};

