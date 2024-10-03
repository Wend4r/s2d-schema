#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x690
// Has VTable
// 
// MNetworkVarNames "int m_iActiveIssueIndex"
// MNetworkVarNames "int m_iOnlyTeamToVote"
// MNetworkVarNames "int m_nVoteOptionCount"
// MNetworkVarNames "int m_nPotentialVotes"
// MNetworkVarNames "bool m_bIsYesNoVote"
class CVoteController : public CBaseEntity
{
public:
	// MNetworkEnable
	int32_t m_iActiveIssueIndex; // 0x4e0	
	// MNetworkEnable
	int32_t m_iOnlyTeamToVote; // 0x4e4	
	// MNetworkEnable
	int32_t m_nVoteOptionCount[5]; // 0x4e8	
	// MNetworkEnable
	int32_t m_nPotentialVotes; // 0x4fc	
	// MNetworkEnable
	bool m_bIsYesNoVote; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x7]; // 0x501
public:
	CountdownTimer m_acceptingVotesTimer; // 0x508	
	CountdownTimer m_executeCommandTimer; // 0x520	
	CountdownTimer m_resetVoteTimer; // 0x538	
	int32_t m_nVotesCast[64]; // 0x550	
	CPlayerSlot m_playerHoldingVote; // 0x650	
	CPlayerSlot m_playerOverrideForVote; // 0x654	
	int32_t m_nHighestCountIndex; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad065c[0x4]; // 0x65c
public:
	CUtlVector< CBaseIssue* > m_potentialIssues; // 0x660	
	CUtlVector< char* > m_VoteOptions; // 0x678	
};

