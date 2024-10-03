#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x760
// Has VTable
class CRevertSaved : public CModelPointEntity
{
public:
	float m_loadTime; // 0x750	
	float m_Duration; // 0x754	
	float m_HoldTime; // 0x758	
	
	// Datamap fields:
	// void InputReload; // 0x0
	// void CRevertSavedLoadThink; // 0x0
};

