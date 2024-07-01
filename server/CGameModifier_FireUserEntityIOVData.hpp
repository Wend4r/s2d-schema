#pragma once

#include <cstdint>

struct FireUserEntityIO_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CGameModifier_FireUserEntityIOVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Fire User Entity IO"
	// MPropertyDescription "User Entity IO to fire when modifier added. 0 = don't fire."
	FireUserEntityIO_t m_FireOnAdded; // 0x5e0	
	// MPropertyDescription "User Entity IO to fire when modifier removed. 0 = don't fire."
	FireUserEntityIO_t m_FireOnRemoved; // 0x5e4	
};

