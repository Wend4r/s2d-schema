#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1900
// Has VTable
// 
// MNetworkVarNames "bool m_bShieldActive"
// MNetworkVarNames "bool m_bPlayingIdle"
// MNetworkVarNames "int m_iVaultState"
class CNPC_TrooperNeutral : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1890[0x63]; // 0x1890
public:
	// MNetworkEnable
	bool m_bShieldActive; // 0x18f3	
	// MNetworkEnable
	bool m_bPlayingIdle; // 0x18f4	
private:
	[[maybe_unused]] uint8_t __pad18f5[0x3]; // 0x18f5
public:
	// MNetworkEnable
	int32_t m_iVaultState; // 0x18f8	
};

