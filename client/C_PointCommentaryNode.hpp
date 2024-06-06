#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf20
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
	[[maybe_unused]] uint8_t __pad0ed0[0x8]; // 0xed0
public:
	// MNetworkEnable
	bool m_bActive; // 0xed8	
	bool m_bWasActive; // 0xed9	
private:
	[[maybe_unused]] uint8_t __pad0eda[0x2]; // 0xeda
public:
	GameTime_t m_flEndTime; // 0xedc	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xee0	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xee4	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xee8	
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xef0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xef8	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xf00	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xf04	
	// MNetworkEnable
	bool m_bListenedTo; // 0xf08	
private:
	[[maybe_unused]] uint8_t __pad0f09[0xf]; // 0xf09
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; // 0xf18	
	bool m_bRestartAfterRestore; // 0xf1c	
	
	// Datamap fields:
	// void m_sndCommentary; // 0xf10
};

