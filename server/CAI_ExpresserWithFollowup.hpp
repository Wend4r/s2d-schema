#pragma once

#include <cstdint>

struct ResponseFollowup;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x78	
};

