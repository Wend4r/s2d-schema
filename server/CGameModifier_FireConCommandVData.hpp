#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x648
// Has VTable
// 
// MGetKV3ClassDefaults
class CGameModifier_FireConCommandVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Fire Con Command"
	// MPropertyDescription "ConCommand to fire when modifier added."
	CUtlString m_FireOnAdded; // 0x638	
	// MPropertyDescription "ConCommand to fire when modifier removed."
	CUtlString m_FireOnRemoved; // 0x640	
};

