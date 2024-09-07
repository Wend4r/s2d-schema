#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "FootFall Tag"
class CFootFallAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
public:
	// MPropertyFriendlyName "Foot"
	FootFallTagFoot_t m_foot; // 0x58	
};

