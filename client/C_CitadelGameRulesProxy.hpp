#pragma once

#include <cstdint>

struct C_CitadelGameRules;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "C_CitadelGameRules * m_pGameRules"
class C_CitadelGameRulesProxy : public C_GameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCitadelGamerules*"
	// MNetworkPriority "32"
	C_CitadelGameRules* m_pGameRules; // 0x538	
};

