#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x758
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
	Vector m_vecOrigin; // 0x510	
	// MNetworkEnable
	float m_MinFalloff; // 0x51c	
	// MNetworkEnable
	float m_MaxFalloff; // 0x520	
	// MNetworkEnable
	float m_flFadeInDuration; // 0x524	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x528	
	// MNetworkEnable
	float m_flMaxWeight; // 0x52c	
	// MNetworkEnable
	float m_flCurWeight; // 0x530	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x534	
	// MNetworkEnable
	bool m_bEnabled; // 0x734	
	// MNetworkEnable
	bool m_bMaster; // 0x735	
	// MNetworkEnable
	bool m_bClientSide; // 0x736	
	// MNetworkEnable
	bool m_bExclusive; // 0x737	
	bool m_bEnabledOnClient[1]; // 0x738	
private:
	[[maybe_unused]] uint8_t __pad0739[0x3]; // 0x739
public:
	float m_flCurWeightOnClient[1]; // 0x73c	
	bool m_bFadingIn[1]; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0741[0x3]; // 0x741
public:
	float m_flFadeStartWeight[1]; // 0x744	
	float m_flFadeStartTime[1]; // 0x748	
	float m_flFadeDuration[1]; // 0x74c	
};

