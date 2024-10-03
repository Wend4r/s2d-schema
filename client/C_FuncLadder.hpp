#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
// Has VTable
// 
// MNetworkVarNames "Vector m_vecLadderDir"
// MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
// MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
// MNetworkVarNames "float m_flAutoRideSpeed"
// MNetworkVarNames "bool m_bFakeLadder"
class C_FuncLadder : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecLadderDir; // 0xd20	
private:
	[[maybe_unused]] uint8_t __pad0d2c[0x4]; // 0xd2c
public:
	CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0xd30	
	Vector m_vecLocalTop; // 0xd48	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0xd54	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0xd60	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0xd6c	
	bool m_bDisabled; // 0xd70	
	// MNetworkEnable
	bool m_bFakeLadder; // 0xd71	
	bool m_bHasSlack; // 0xd72	
	
	// Static fields:
	static CUtlVector< C_FuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< C_FuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->m_static_fields[0]->m_instance);};
};

