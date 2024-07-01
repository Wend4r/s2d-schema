#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
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
	C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x538	
	// MNetworkEnable
	// MNetworkAlias "m_aPawns"
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers; // 0x550	
	// MNetworkEnable
	int32_t m_iScore; // 0x568	
	// MNetworkEnable
	char m_szTeamname[129]; // 0x56c	
};

