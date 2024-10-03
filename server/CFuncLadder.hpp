#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x800
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
	Vector m_vecLadderDir; // 0x750	
private:
	[[maybe_unused]] uint8_t __pad075c[0x4]; // 0x75c
public:
	CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x760	
	Vector m_vecLocalTop; // 0x778	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0x784	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0x790	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x79c	
	bool m_bDisabled; // 0x7a0	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x7a1	
	bool m_bHasSlack; // 0x7a2	
private:
	[[maybe_unused]] uint8_t __pad07a3[0x5]; // 0x7a3
public:
	CUtlSymbolLarge m_surfacePropName; // 0x7a8	
	CEntityIOOutput m_OnPlayerGotOnLadder; // 0x7b0	
	CEntityIOOutput m_OnPlayerGotOffLadder; // 0x7d8	
	
	// Static fields:
	static CUtlVector< CFuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< CFuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CFuncLadder")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

