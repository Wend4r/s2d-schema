#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x670
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
	int32_t m_iActiveIssueIndex; // 0x4c0	
	// MNetworkEnable
	int32_t m_iOnlyTeamToVote; // 0x4c4	
	// MNetworkEnable
	int32_t m_nVoteOptionCount[5]; // 0x4c8	
	// MNetworkEnable
	int32_t m_nPotentialVotes; // 0x4dc	
	// MNetworkEnable
	bool m_bIsYesNoVote; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x7]; // 0x4e1
public:
	CountdownTimer m_acceptingVotesTimer; // 0x4e8	
	CountdownTimer m_executeCommandTimer; // 0x500	
	CountdownTimer m_resetVoteTimer; // 0x518	
	int32_t m_nVotesCast[64]; // 0x530	
	CPlayerSlot m_playerHoldingVote; // 0x630	
	CPlayerSlot m_playerOverrideForVote; // 0x634	
	int32_t m_nHighestCountIndex; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad063c[0x4]; // 0x63c
public:
	CUtlVector< CBaseIssue* > m_potentialIssues; // 0x640	
	CUtlVector< char* > m_VoteOptions; // 0x658	
};

