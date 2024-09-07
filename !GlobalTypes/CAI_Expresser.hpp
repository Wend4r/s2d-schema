#pragma once

#include <cstdint>

struct GameTime_t;
struct CBaseFlex;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// Has VTable
class CAI_Expresser
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x38]; // 0x0
public:
	GameTime_t m_flStopTalkTime; // 0x38	
	GameTime_t m_flStopTalkTimeWithoutDelay; // 0x3c	
	GameTime_t m_flBlockedTalkTime; // 0x40	
	int32_t m_voicePitch; // 0x44	
	GameTime_t m_flLastTimeAcceptedSpeak; // 0x48	
	bool m_bAllowSpeakingInterrupts; // 0x4c	
	bool m_bConsiderSceneInvolvementAsSpeech; // 0x4d	
	bool m_bSceneEntityDisabled; // 0x4e	
private:
	[[maybe_unused]] uint8_t __pad004f[0x1]; // 0x4f
public:
	int32_t m_nLastSpokenPriority; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x1c]; // 0x54
public:
	CBaseFlex* m_pOuter; // 0x70	
	
	// Datamap fields:
	// void m_pSink; // 0x8
	// void m_conceptCooldowns; // 0x10
};

