#pragma once

#include <cstdint>

struct C_CSGameRules;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "C_CSGameRules* m_pGameRules"
class C_CSGameRulesProxy : public C_GameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCSGameRules*"
	// MNetworkPriority "32"
	C_CSGameRules* m_pGameRules; // 0x548	
};

