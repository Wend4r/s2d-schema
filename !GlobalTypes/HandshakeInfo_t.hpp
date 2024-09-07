#pragma once

#include <cstdint>

struct GameTick_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct HandshakeInfo_t
{
public:
	HandshakeState_t m_nHandshakeState; // 0x0	
	HandshakeScope_t m_nHandshakeScope; // 0x4	
	GameTick_t m_nLastHandshakeUpdateTick; // 0x8	
	bool m_bForceHandshakeRestartOnScriptedSequenceCompletion; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	CGlobalSymbol m_sHandshakeName; // 0x10	
};

