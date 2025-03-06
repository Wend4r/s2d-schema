#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "Vector m_vDistanceInnerMins"
// MNetworkVarNames "Vector m_vDistanceInnerMaxs"
// MNetworkVarNames "Vector m_vDistanceOuterMins"
// MNetworkVarNames "Vector m_vDistanceOuterMaxs"
// MNetworkVarNames "int m_nAABBDirection"
class CCitadelSoundOpvarSetOBB : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0510[0x18]; // 0x510
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x528	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x530	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x538	
	// MNetworkEnable
	Vector m_vDistanceInnerMins; // 0x540	
	// MNetworkEnable
	Vector m_vDistanceInnerMaxs; // 0x54c	
	// MNetworkEnable
	Vector m_vDistanceOuterMins; // 0x558	
	// MNetworkEnable
	Vector m_vDistanceOuterMaxs; // 0x564	
	// MNetworkEnable
	int32_t m_nAABBDirection; // 0x570	
};

