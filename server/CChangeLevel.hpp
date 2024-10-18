#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
class CChangeLevel : public CBaseTrigger
{
public:
	CUtlString m_sMapName; // 0x960	
	CUtlString m_sLandmarkName; // 0x968	
	CEntityIOOutput m_OnChangeLevel; // 0x970	
	bool m_bTouched; // 0x998	
	bool m_bNoTouch; // 0x999	
	bool m_bNewChapter; // 0x99a	
	bool m_bOnChangeLevelFired; // 0x99b	
	
	// Datamap fields:
	// void InputChangeLevel; // 0x0
	// CUtlString map; // 0x7fffffff
	// CUtlString landmark; // 0x7fffffff
};

