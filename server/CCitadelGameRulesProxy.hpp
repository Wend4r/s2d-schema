#pragma once

#include <cstdint>

struct CCitadelGameRules;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
// 
// MNetworkVarNames "CCitadelGameRules * m_pGameRules"
class CCitadelGameRulesProxy : public CGameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCitadelGamerules*"
	// MNetworkPriority "32"
	CCitadelGameRules* m_pGameRules; // 0x4b8	
};

