#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
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
	Vector m_vecLadderDir; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cd4[0x4]; // 0xcd4
public:
	CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0xcd8	
	Vector m_vecLocalTop; // 0xcf0	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0xcfc	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0xd08	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0xd14	
	bool m_bDisabled; // 0xd18	
	// MNetworkEnable
	bool m_bFakeLadder; // 0xd19	
	bool m_bHasSlack; // 0xd1a	
	
	// Static fields:
	static CUtlVector< C_FuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< C_FuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->m_static_fields[0]->m_instance);};
};

