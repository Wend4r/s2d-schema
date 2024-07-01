#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xac0
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flStartTimeInCommentary"
// MNetworkVarNames "string_t m_iszCommentaryFile"
// MNetworkVarNames "string_t m_iszTitle"
// MNetworkVarNames "string_t m_iszSpeakers"
// MNetworkVarNames "int m_iNodeNumber"
// MNetworkVarNames "int m_iNodeNumberMax"
// MNetworkVarNames "bool m_bListenedTo"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
class C_PointCommentaryNode : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x8]; // 0xa70
public:
	// MNetworkEnable
	bool m_bActive; // 0xa78	
	bool m_bWasActive; // 0xa79	
private:
	[[maybe_unused]] uint8_t __pad0a7a[0x2]; // 0xa7a
public:
	GameTime_t m_flEndTime; // 0xa7c	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa80	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xa84	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xa88	
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xa90	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xa98	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xaa0	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xaa4	
	// MNetworkEnable
	bool m_bListenedTo; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0xf]; // 0xaa9
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; // 0xab8	
	bool m_bRestartAfterRestore; // 0xabc	
	
	// Datamap fields:
	// void m_sndCommentary; // 0xab0
};

