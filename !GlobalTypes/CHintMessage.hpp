#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
class CHintMessage
{
public:
	char* m_hintString; // 0x0	
	CUtlVector< char* > m_args; // 0x8	
	float m_duration; // 0x20	
};

