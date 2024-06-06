#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb10
// Has VTable
class CLogicCase : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nCase[32]; // 0x4c0	
	int32_t m_nShuffleCases; // 0x5c0	
	int32_t m_nLastShuffleCase; // 0x5c4	
	uint8_t m_uchShuffleCaseMap[32]; // 0x5c8	
	CEntityIOOutput m_OnCase[32]; // 0x5e8	
	CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > > m_OnDefault; // 0xae8	
	
	// Datamap fields:
	// CUtlSymbolLarge InputValue; // 0x0
	// void InputPickRandom; // 0x0
	// void InputPickRandomShuffle; // 0x0
	// void InputResetShuffle; // 0x0
};

