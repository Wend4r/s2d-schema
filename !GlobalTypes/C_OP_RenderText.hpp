#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderText : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "outline color"
	Color m_OutlineColor; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x4]; // 0x20c
public:
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x210	
};

