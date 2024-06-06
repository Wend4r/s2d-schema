#pragma once

#include <cstdint>

struct HSequence;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct SequenceHistory_t
{
public:
	HSequence m_hSequence; // 0x0	
	GameTime_t m_flSeqStartTime; // 0x4	
	float m_flSeqFixedCycle; // 0x8	
	AnimLoopMode_t m_nSeqLoopMode; // 0xc	
	float m_flPlaybackRate; // 0x10	
	float m_flCyclesPerSecond; // 0x14	
};

