#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
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
	Vector m_vecOrigin; // 0x568	
	// MNetworkEnable
	float m_MinFalloff; // 0x574	
	// MNetworkEnable
	float m_MaxFalloff; // 0x578	
	// MNetworkEnable
	float m_flFadeInDuration; // 0x57c	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x580	
	// MNetworkEnable
	float m_flMaxWeight; // 0x584	
	// MNetworkEnable
	float m_flCurWeight; // 0x588	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x58c	
	// MNetworkEnable
	bool m_bEnabled; // 0x78c	
	// MNetworkEnable
	bool m_bMaster; // 0x78d	
	// MNetworkEnable
	bool m_bClientSide; // 0x78e	
	// MNetworkEnable
	bool m_bExclusive; // 0x78f	
	bool m_bEnabledOnClient[1]; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x3]; // 0x791
public:
	float m_flCurWeightOnClient[1]; // 0x794	
	bool m_bFadingIn[1]; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad0799[0x3]; // 0x799
public:
	float m_flFadeStartWeight[1]; // 0x79c	
	float m_flFadeStartTime[1]; // 0x7a0	
	float m_flFadeDuration[1]; // 0x7a4	
};

