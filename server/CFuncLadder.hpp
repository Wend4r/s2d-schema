#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
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
	Vector m_vecLadderDir; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad0754[0x4]; // 0x754
public:
	CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x758	
	Vector m_vecLocalTop; // 0x770	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0x77c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0x788	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x794	
	bool m_bDisabled; // 0x798	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x799	
	bool m_bHasSlack; // 0x79a	
private:
	[[maybe_unused]] uint8_t __pad079b[0x5]; // 0x79b
public:
	CUtlSymbolLarge m_surfacePropName; // 0x7a0	
	CEntityIOOutput m_OnPlayerGotOnLadder; // 0x7a8	
	CEntityIOOutput m_OnPlayerGotOffLadder; // 0x7d0	
	
	// Static fields:
	static CUtlVector< CFuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< CFuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CFuncLadder")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

