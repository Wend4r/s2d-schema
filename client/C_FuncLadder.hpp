#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd80
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
	Vector m_vecLadderDir; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d34[0x4]; // 0xd34
public:
	CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0xd38	
	Vector m_vecLocalTop; // 0xd50	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0xd5c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0xd68	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0xd74	
	bool m_bDisabled; // 0xd78	
	// MNetworkEnable
	bool m_bFakeLadder; // 0xd79	
	bool m_bHasSlack; // 0xd7a	
	
	// Static fields:
	static CUtlVector< C_FuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< C_FuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->m_static_fields[0]->m_instance);};
};

