#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CGameGibManager : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x20]; // 0x4c0
public:
	bool m_bAllowNewGibs; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	int32_t m_iCurrentMaxPieces; // 0x4e4	
	int32_t m_iMaxPieces; // 0x4e8	
	int32_t m_iLastFrame; // 0x4ec	
	
	// Datamap fields:
	// int32_t InputSetMaxPieces; // 0x0
	// int32_t InputSetMaxPiecesDX8; // 0x0
	// void m_LRU; // 0x4c0
};

