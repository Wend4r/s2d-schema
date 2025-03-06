#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MNetworkVarNames "Vector m_vecLadderDir"
// MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
// MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
// MNetworkVarNames "float m_flAutoRideSpeed"
// MNetworkVarNames "bool m_bFakeLadder"
class CFuncLadder : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecLadderDir; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07c4[0x4]; // 0x7c4
public:
	CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x7c8	
	Vector m_vecLocalTop; // 0x7e0	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0x7ec	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0x7f8	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x804	
	bool m_bDisabled; // 0x808	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x809	
	bool m_bHasSlack; // 0x80a	
private:
	[[maybe_unused]] uint8_t __pad080b[0x5]; // 0x80b
public:
	CUtlSymbolLarge m_surfacePropName; // 0x810	
	CEntityIOOutput m_OnPlayerGotOnLadder; // 0x818	
	CEntityIOOutput m_OnPlayerGotOffLadder; // 0x840	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

