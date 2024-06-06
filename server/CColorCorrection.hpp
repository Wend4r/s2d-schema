#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkVarNames "float32 m_flFadeInDuration"
// MNetworkVarNames "float32 m_flFadeOutDuration"
// MNetworkVarNames "float32 m_flMaxWeight"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bClientSide"
// MNetworkVarNames "bool m_bExclusive"
// MNetworkVarNames "float32 m_MinFalloff"
// MNetworkVarNames "float32 m_MaxFalloff"
// MNetworkVarNames "float32 m_flCurWeight"
// MNetworkVarNames "char m_netlookupFilename"
class CColorCorrection : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeInDuration; // 0x4c0	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x4c4	
	float m_flStartFadeInWeight; // 0x4c8	
	float m_flStartFadeOutWeight; // 0x4cc	
	GameTime_t m_flTimeStartFadeIn; // 0x4d0	
	GameTime_t m_flTimeStartFadeOut; // 0x4d4	
	// MNetworkEnable
	float m_flMaxWeight; // 0x4d8	
	bool m_bStartDisabled; // 0x4dc	
	// MNetworkEnable
	bool m_bEnabled; // 0x4dd	
	// MNetworkEnable
	bool m_bMaster; // 0x4de	
	// MNetworkEnable
	bool m_bClientSide; // 0x4df	
	// MNetworkEnable
	bool m_bExclusive; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	// MNetworkEnable
	float m_MinFalloff; // 0x4e4	
	// MNetworkEnable
	float m_MaxFalloff; // 0x4e8	
	// MNetworkEnable
	float m_flCurWeight; // 0x4ec	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x4f0	
	CUtlSymbolLarge m_lookupFilename; // 0x6f0	
	
	// Datamap fields:
	// void CColorCorrectionFadeInThink; // 0x0
	// void CColorCorrectionFadeOutThink; // 0x0
	// void m_netlookupFilename; // 0x4f0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// float InputSetFadeInDuration; // 0x0
	// float InputSetFadeOutDuration; // 0x0
};

