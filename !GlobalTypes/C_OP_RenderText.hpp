#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderText : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "outline color"
	Color m_OutlineColor; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x218	
};

