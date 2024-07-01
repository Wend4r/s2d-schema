#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x780
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkVarNames "float32 m_MinFalloff"
// MNetworkVarNames "float32 m_MaxFalloff"
// MNetworkVarNames "float32 m_flFadeInDuration"
// MNetworkVarNames "float32 m_flFadeOutDuration"
// MNetworkVarNames "float32 m_flMaxWeight"
// MNetworkVarNames "float32 m_flCurWeight"
// MNetworkVarNames "char m_netlookupFilename"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bClientSide"
// MNetworkVarNames "bool m_bExclusive"
class C_ColorCorrection : public C_BaseEntity
{
public:
	Vector m_vecOrigin; // 0x538	
	// MNetworkEnable
	float m_MinFalloff; // 0x544	
	// MNetworkEnable
	float m_MaxFalloff; // 0x548	
	// MNetworkEnable
	float m_flFadeInDuration; // 0x54c	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x550	
	// MNetworkEnable
	float m_flMaxWeight; // 0x554	
	// MNetworkEnable
	float m_flCurWeight; // 0x558	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x55c	
	// MNetworkEnable
	bool m_bEnabled; // 0x75c	
	// MNetworkEnable
	bool m_bMaster; // 0x75d	
	// MNetworkEnable
	bool m_bClientSide; // 0x75e	
	// MNetworkEnable
	bool m_bExclusive; // 0x75f	
	bool m_bEnabledOnClient[1]; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0761[0x3]; // 0x761
public:
	float m_flCurWeightOnClient[1]; // 0x764	
	bool m_bFadingIn[1]; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad0769[0x3]; // 0x769
public:
	float m_flFadeStartWeight[1]; // 0x76c	
	float m_flFadeStartTime[1]; // 0x770	
	float m_flFadeDuration[1]; // 0x774	
};

