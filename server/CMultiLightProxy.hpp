#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CMultiLightProxy : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszLightNameFilter; // 0x4e0	
	CUtlSymbolLarge m_iszLightClassFilter; // 0x4e8	
	float m_flLightRadiusFilter; // 0x4f0	
	float m_flBrightnessDelta; // 0x4f4	
	bool m_bPerformScreenFade; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x3]; // 0x4f9
public:
	float m_flTargetBrightnessMultiplier; // 0x4fc	
	float m_flCurrentBrightnessMultiplier; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
public:
	CUtlVector< CHandle< CLightEntity > > m_vecLights; // 0x508	
	
	// Datamap fields:
	// float InputFlickerLights; // 0x0
	// float InputDisableLights; // 0x0
	// float InputSetLightsBrightnessMultiplier; // 0x0
	// float InputSetBrightnessDelta; // 0x0
	// void CMultiLightProxyRestoreFlashlightThink; // 0x0
	// void CMultiLightProxyApproachBrightnessThink; // 0x0
};

