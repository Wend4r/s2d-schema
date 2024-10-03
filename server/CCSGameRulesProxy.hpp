#pragma once

#include <cstdint>

struct CCSGameRules;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
// 
// MNetworkVarNames "CCSGameRules* m_pGameRules"
class CCSGameRulesProxy : public CGameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCSGameRules*"
	// MNetworkPriority "32"
	CCSGameRules* m_pGameRules; // 0x4e0	
};

