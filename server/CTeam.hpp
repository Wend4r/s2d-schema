#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
// 
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "CHandle< CBasePlayerController > m_aPlayerControllers"
// MNetworkVarNames "CHandle< CBasePlayerPawn > m_aPlayers"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "char m_szTeamname"
class CTeam : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkAlias "m_aPlayers"
	CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x4e0	
	// MNetworkEnable
	// MNetworkAlias "m_aPawns"
	CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers; // 0x4f8	
	// MNetworkEnable
	int32_t m_iScore; // 0x510	
	// MNetworkEnable
	char m_szTeamname[129]; // 0x514	
};

