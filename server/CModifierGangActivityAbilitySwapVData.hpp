#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierGangActivityAbilitySwapVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Ability References"
	CSubclassName< 4 > m_SummonGangster; // 0x5f0	
	CSubclassName< 4 > m_TeleportToGangster; // 0x600	
	CSubclassName< 4 > m_Cancel; // 0x610	
	CSubclassName< 4 > m_ReplaceWithSummonGangster; // 0x620	
	CSubclassName< 4 > m_ReplaceWithTeleportToGangster; // 0x630	
	CSubclassName< 4 > m_ReplaceWithCancel; // 0x640	
};

