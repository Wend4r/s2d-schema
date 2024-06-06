#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x790
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
	Vector m_vecOrigin; // 0x548	
	// MNetworkEnable
	float m_MinFalloff; // 0x554	
	// MNetworkEnable
	float m_MaxFalloff; // 0x558	
	// MNetworkEnable
	float m_flFadeInDuration; // 0x55c	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x560	
	// MNetworkEnable
	float m_flMaxWeight; // 0x564	
	// MNetworkEnable
	float m_flCurWeight; // 0x568	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x56c	
	// MNetworkEnable
	bool m_bEnabled; // 0x76c	
	// MNetworkEnable
	bool m_bMaster; // 0x76d	
	// MNetworkEnable
	bool m_bClientSide; // 0x76e	
	// MNetworkEnable
	bool m_bExclusive; // 0x76f	
	bool m_bEnabledOnClient[1]; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0771[0x3]; // 0x771
public:
	float m_flCurWeightOnClient[1]; // 0x774	
	bool m_bFadingIn[1]; // 0x778	
private:
	[[maybe_unused]] uint8_t __pad0779[0x3]; // 0x779
public:
	float m_flFadeStartWeight[1]; // 0x77c	
	float m_flFadeStartTime[1]; // 0x780	
	float m_flFadeDuration[1]; // 0x784	
};

