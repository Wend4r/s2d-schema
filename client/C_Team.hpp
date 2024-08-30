#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "CHandle< CBasePlayerController > m_aPlayerControllers"
// MNetworkVarNames "CHandle< C_BasePlayerPawn > m_aPlayers"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "char m_szTeamname"
class C_Team : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkAlias "m_aPlayers"
	C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x558	
	// MNetworkEnable
	// MNetworkAlias "m_aPawns"
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers; // 0x570	
	// MNetworkEnable
	int32_t m_iScore; // 0x588	
	// MNetworkEnable
	char m_szTeamname[129]; // 0x58c	
};

