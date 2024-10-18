#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfd8
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
	[[maybe_unused]] uint8_t __pad0f88[0x8]; // 0xf88
public:
	// MNetworkEnable
	bool m_bActive; // 0xf90	
	bool m_bWasActive; // 0xf91	
private:
	[[maybe_unused]] uint8_t __pad0f92[0x2]; // 0xf92
public:
	GameTime_t m_flEndTime; // 0xf94	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xf98	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xf9c	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xfa0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xfa8	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xfb0	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xfb8	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xfbc	
	// MNetworkEnable
	bool m_bListenedTo; // 0xfc0	
private:
	[[maybe_unused]] uint8_t __pad0fc1[0xf]; // 0xfc1
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; // 0xfd0	
	bool m_bRestartAfterRestore; // 0xfd4	
	
	// Datamap fields:
	// void m_sndCommentary; // 0xfc8
};

