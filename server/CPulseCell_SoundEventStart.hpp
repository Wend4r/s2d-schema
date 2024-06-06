#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Sound Event"
// MPropertyDescription "Starts a sound event, returns a handle that can be used to stop it."
class CPulseCell_SoundEventStart : public CPulseCell_BaseFlow
{
public:
	SoundEventStartType_t m_Type; // 0x48	
};

