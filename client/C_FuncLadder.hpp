#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x860
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
	Vector m_vecLadderDir; // 0x808	
private:
	[[maybe_unused]] uint8_t __pad0814[0x4]; // 0x814
public:
	CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0x818	
	Vector m_vecLocalTop; // 0x830	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0x83c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0x848	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x854	
	bool m_bDisabled; // 0x858	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x859	
	bool m_bHasSlack; // 0x85a	
};

