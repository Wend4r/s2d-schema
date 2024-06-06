#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CBtActionMoveTo : public CBtNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlString m_szDestinationInputKey; // 0x60	
	CUtlString m_szHidingSpotInputKey; // 0x68	
	CUtlString m_szThreatInputKey; // 0x70	
	Vector m_vecDestination; // 0x78	
	bool m_bAutoLookAdjust; // 0x84	
	bool m_bComputePath; // 0x85	
private:
	[[maybe_unused]] uint8_t __pad0086[0x2]; // 0x86
public:
	float m_flDamagingAreasPenaltyCost; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	CountdownTimer m_CheckApproximateCornersTimer; // 0x90	
	CountdownTimer m_CheckHighPriorityItem; // 0xa8	
	CountdownTimer m_RepathTimer; // 0xc0	
	float m_flArrivalEpsilon; // 0xd8	
	float m_flAdditionalArrivalEpsilon2D; // 0xdc	
	float m_flHidingSpotCheckDistanceThreshold; // 0xe0	
	float m_flNearestAreaDistanceThreshold; // 0xe4	
};

