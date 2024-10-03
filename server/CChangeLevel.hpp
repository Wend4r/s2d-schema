#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x960
// Has VTable
class CChangeLevel : public CBaseTrigger
{
public:
	CUtlString m_sMapName; // 0x920	
	CUtlString m_sLandmarkName; // 0x928	
	CEntityIOOutput m_OnChangeLevel; // 0x930	
	bool m_bTouched; // 0x958	
	bool m_bNoTouch; // 0x959	
	bool m_bNewChapter; // 0x95a	
	bool m_bOnChangeLevelFired; // 0x95b	
	
	// Datamap fields:
	// void InputChangeLevel; // 0x0
	// CUtlString map; // 0x7fffffff
	// CUtlString landmark; // 0x7fffffff
};

