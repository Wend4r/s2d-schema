#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Trace Miss Behavior"
// MPropertyDescription "Specified what to do when a trace does not hit a surface."
// MVDataClassGroup
class CSmartPropVariable_TraceNoHit : public CSmartPropVariable
{
public:
	TraceNoHitResult_t m_DefaultValue; // 0x28	
};

