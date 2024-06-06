#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CRevertSaved : public CModelPointEntity
{
public:
	float m_loadTime; // 0x710	
	float m_Duration; // 0x714	
	float m_HoldTime; // 0x718	
	
	// Datamap fields:
	// void InputReload; // 0x0
	// void CRevertSavedLoadThink; // 0x0
};

