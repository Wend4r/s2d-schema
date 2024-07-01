#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CMultiLightProxy : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszLightNameFilter; // 0x4b8	
	CUtlSymbolLarge m_iszLightClassFilter; // 0x4c0	
	float m_flLightRadiusFilter; // 0x4c8	
	float m_flBrightnessDelta; // 0x4cc	
	bool m_bPerformScreenFade; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x3]; // 0x4d1
public:
	float m_flTargetBrightnessMultiplier; // 0x4d4	
	float m_flCurrentBrightnessMultiplier; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlVector< CHandle< CLightEntity > > m_vecLights; // 0x4e0	
	
	// Datamap fields:
	// float InputFlickerLights; // 0x0
	// float InputDisableLights; // 0x0
	// float InputSetLightsBrightnessMultiplier; // 0x0
	// float InputSetBrightnessDelta; // 0x0
	// void CMultiLightProxyRestoreFlashlightThink; // 0x0
	// void CMultiLightProxyApproachBrightnessThink; // 0x0
};

