#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
// 
// MNetworkVarNames "float m_fFanForceMaxRadius"
// MNetworkVarNames "float m_fFanForceMinRadius"
// MNetworkVarNames "float m_flCurveDistRange"
// MNetworkVarNames "string_t m_FanForceCurveString"
class CInfoFan : public C_PointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0510[0x40]; // 0x510
public:
	// MNetworkEnable
	float m_fFanForceMaxRadius; // 0x550	
	// MNetworkEnable
	float m_fFanForceMinRadius; // 0x554	
	// MNetworkEnable
	float m_flCurveDistRange; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad055c[0x4]; // 0x55c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_FanForceCurveString; // 0x560	
};

