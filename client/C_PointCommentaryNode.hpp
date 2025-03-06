#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb60
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
	[[maybe_unused]] uint8_t __pad0b00[0x18]; // 0xb00
public:
	// MNetworkEnable
	bool m_bActive; // 0xb18	
	bool m_bWasActive; // 0xb19	
private:
	[[maybe_unused]] uint8_t __pad0b1a[0x2]; // 0xb1a
public:
	GameTime_t m_flEndTime; // 0xb1c	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xb20	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xb24	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xb28	
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xb30	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xb38	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xb40	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xb44	
	// MNetworkEnable
	bool m_bListenedTo; // 0xb48	
private:
	[[maybe_unused]] uint8_t __pad0b49[0xf]; // 0xb49
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; // 0xb58	
	bool m_bRestartAfterRestore; // 0xb5c	
	
	// Datamap fields:
	// void m_sndCommentary; // 0xb50
};

