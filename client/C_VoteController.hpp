#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
// Has VTable
// 
// MNetworkVarNames "int m_iActiveIssueIndex"
// MNetworkVarNames "int m_iOnlyTeamToVote"
// MNetworkVarNames "int m_nVoteOptionCount"
// MNetworkVarNames "int m_nPotentialVotes"
// MNetworkVarNames "bool m_bIsYesNoVote"
class C_VoteController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0568[0x10]; // 0x568
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteType"
	int32_t m_iActiveIssueIndex; // 0x578	
	// MNetworkEnable
	int32_t m_iOnlyTeamToVote; // 0x57c	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteOption"
	int32_t m_nVoteOptionCount[5]; // 0x580	
	// MNetworkEnable
	int32_t m_nPotentialVotes; // 0x594	
	bool m_bVotesDirty; // 0x598	
	bool m_bTypeDirty; // 0x599	
	// MNetworkEnable
	bool m_bIsYesNoVote; // 0x59a	
};

