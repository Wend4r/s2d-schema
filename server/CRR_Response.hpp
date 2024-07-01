#pragma once

#include <cstdint>

struct ResponseParams;
struct ResponseFollowup;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1e8
class CRR_Response
{
public:
	uint8_t m_Type; // 0x0	
	char m_szResponseName[192]; // 0x1	
	char m_szMatchingRule[128]; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad0141[0x7]; // 0x141
public:
	// -> odds - 0x158
	// -> flags - 0x15a
	// -> m_pFollowup - 0x160
	ResponseParams m_Params; // 0x148	
	float m_fMatchScore; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad016c[0x4]; // 0x16c
public:
	char* m_szSpeakerContext; // 0x170	
	char* m_szWorldContext; // 0x178	
	// -> followup_concept - 0x180
	// -> followup_contexts - 0x188
	// -> followup_delay - 0x190
	// -> followup_target - 0x194
	// -> followup_entityiotarget - 0x19c
	// -> followup_entityioinput - 0x1a4
	// -> followup_entityiodelay - 0x1ac
	// -> bFired - 0x1b0
	ResponseFollowup m_Followup; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad01b1[0x1]; // 0x1b1
public:
	CUtlSymbol m_recipientFilter; // 0x1b2	
private:
	[[maybe_unused]] uint8_t __pad01b4[0x4]; // 0x1b4
public:
	CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1b8	
	CUtlVector< char* > m_pchCriteriaValues; // 0x1d0	
};

