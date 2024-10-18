#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a0
// Has VTable
class CRevertSaved : public CModelPointEntity
{
public:
	float m_loadTime; // 0x790	
	float m_Duration; // 0x794	
	float m_HoldTime; // 0x798	
	
	// Datamap fields:
	// void InputReload; // 0x0
	// void CRevertSavedLoadThink; // 0x0
};

