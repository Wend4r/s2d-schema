#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// 
// MNetworkVarNames "float m_flAttackRange"
// MNetworkVarNames "float m_flAimPitch"
class C_NPC_FieldSentry : public C_NPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0a98[0x4]; // 0xa98
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xa9c	
	// MNetworkEnable
	float m_flAimPitch; // 0xaa0	
};

