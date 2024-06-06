#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
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
	Vector m_vecLadderDir; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad071c[0x4]; // 0x71c
public:
	CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x720	
	Vector m_vecLocalTop; // 0x738	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0x744	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0x750	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x75c	
	bool m_bDisabled; // 0x760	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x761	
	bool m_bHasSlack; // 0x762	
private:
	[[maybe_unused]] uint8_t __pad0763[0x5]; // 0x763
public:
	CUtlSymbolLarge m_surfacePropName; // 0x768	
	CEntityIOOutput m_OnPlayerGotOnLadder; // 0x770	
	CEntityIOOutput m_OnPlayerGotOffLadder; // 0x798	
	
	// Static fields:
	static CUtlVector< CFuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< CFuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CFuncLadder")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

