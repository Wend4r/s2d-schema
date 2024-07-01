#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x958
// Has VTable
class CChangeLevel : public CBaseTrigger
{
public:
	CUtlString m_sMapName; // 0x918	
	CUtlString m_sLandmarkName; // 0x920	
	CEntityIOOutput m_OnChangeLevel; // 0x928	
	bool m_bTouched; // 0x950	
	bool m_bNoTouch; // 0x951	
	bool m_bNewChapter; // 0x952	
	bool m_bOnChangeLevelFired; // 0x953	
	
	// Datamap fields:
	// void InputChangeLevel; // 0x0
	// CUtlString map; // 0x7fffffff
	// CUtlString landmark; // 0x7fffffff
};

