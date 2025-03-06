#pragma once

#include <cstdint>

struct LastIncomingHit_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CAI_AnimGraphServices : public CAI_Component
{
public:
	HandshakeInfo_t m_pHandshakeInfo[2]; // 0x40	
	float m_flMinFaceTolerance; // 0x70	
	LastIncomingHit_t m_LastIncomingHit; // 0x74	
};

