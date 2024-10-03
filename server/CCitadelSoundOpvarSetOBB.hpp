#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
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
class CCitadelSoundOpvarSetOBB : public CBaseEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x4e0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x4e8	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x4f0	
	// MNetworkEnable
	Vector m_vDistanceInnerMins; // 0x4f8	
	// MNetworkEnable
	Vector m_vDistanceInnerMaxs; // 0x504	
	// MNetworkEnable
	Vector m_vDistanceOuterMins; // 0x510	
	// MNetworkEnable
	Vector m_vDistanceOuterMaxs; // 0x51c	
	// MNetworkEnable
	int32_t m_nAABBDirection; // 0x528	
};

