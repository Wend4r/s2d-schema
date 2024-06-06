#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
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
	[[maybe_unused]] uint8_t __pad0548[0x10]; // 0x548
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteType"
	int32_t m_iActiveIssueIndex; // 0x558	
	// MNetworkEnable
	int32_t m_iOnlyTeamToVote; // 0x55c	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteOption"
	int32_t m_nVoteOptionCount[5]; // 0x560	
	// MNetworkEnable
	int32_t m_nPotentialVotes; // 0x574	
	bool m_bVotesDirty; // 0x578	
	bool m_bTypeDirty; // 0x579	
	// MNetworkEnable
	bool m_bIsYesNoVote; // 0x57a	
};

