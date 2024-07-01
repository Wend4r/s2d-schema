#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
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
	[[maybe_unused]] uint8_t __pad0538[0x18]; // 0x538
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x550	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x558	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x560	
	// MNetworkEnable
	Vector m_vDistanceInnerMins; // 0x568	
	// MNetworkEnable
	Vector m_vDistanceInnerMaxs; // 0x574	
	// MNetworkEnable
	Vector m_vDistanceOuterMins; // 0x580	
	// MNetworkEnable
	Vector m_vDistanceOuterMaxs; // 0x58c	
	// MNetworkEnable
	int32_t m_nAABBDirection; // 0x598	
};

