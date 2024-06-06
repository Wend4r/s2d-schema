#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x920
// Has VTable
class CChangeLevel : public CBaseTrigger
{
public:
	CUtlString m_sMapName; // 0x8e0	
	CUtlString m_sLandmarkName; // 0x8e8	
	CEntityIOOutput m_OnChangeLevel; // 0x8f0	
	bool m_bTouched; // 0x918	
	bool m_bNoTouch; // 0x919	
	bool m_bNewChapter; // 0x91a	
	bool m_bOnChangeLevelFired; // 0x91b	
	
	// Datamap fields:
	// void InputChangeLevel; // 0x0
	// CUtlString map; // 0x7fffffff
	// CUtlString landmark; // 0x7fffffff
};

