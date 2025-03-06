#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MNetworkVarNames "float m_fFanForceMaxRadius"
// MNetworkVarNames "float m_fFanForceMinRadius"
// MNetworkVarNames "float m_flCurveDistRange"
// MNetworkVarNames "string_t m_FanForceCurveString"
class CInfoFan : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x40]; // 0x4e0
public:
	// MNetworkEnable
	float m_fFanForceMaxRadius; // 0x520	
	// MNetworkEnable
	float m_fFanForceMinRadius; // 0x524	
	// MNetworkEnable
	float m_flCurveDistRange; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad052c[0x4]; // 0x52c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_FanForceCurveString; // 0x530	
};

