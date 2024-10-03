#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb30
// Has VTable
class CLogicCase : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nCase[32]; // 0x4e0	
	int32_t m_nShuffleCases; // 0x5e0	
	int32_t m_nLastShuffleCase; // 0x5e4	
	uint8_t m_uchShuffleCaseMap[32]; // 0x5e8	
	CEntityIOOutput m_OnCase[32]; // 0x608	
	CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > > m_OnDefault; // 0xb08	
	
	// Datamap fields:
	// CUtlSymbolLarge InputValue; // 0x0
	// void InputPickRandom; // 0x0
	// void InputPickRandomShuffle; // 0x0
	// void InputResetShuffle; // 0x0
};

