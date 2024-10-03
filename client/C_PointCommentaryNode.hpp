#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfd0
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
	[[maybe_unused]] uint8_t __pad0f80[0x8]; // 0xf80
public:
	// MNetworkEnable
	bool m_bActive; // 0xf88	
	bool m_bWasActive; // 0xf89	
private:
	[[maybe_unused]] uint8_t __pad0f8a[0x2]; // 0xf8a
public:
	GameTime_t m_flEndTime; // 0xf8c	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xf90	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xf94	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xf98	
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xfa0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xfa8	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xfb0	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xfb4	
	// MNetworkEnable
	bool m_bListenedTo; // 0xfb8	
private:
	[[maybe_unused]] uint8_t __pad0fb9[0xf]; // 0xfb9
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; // 0xfc8	
	bool m_bRestartAfterRestore; // 0xfcc	
	
	// Datamap fields:
	// void m_sndCommentary; // 0xfc0
};

