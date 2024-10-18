#pragma once

#include <cstdint>

struct CPathTrack;
struct CFuncTrackTrain;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x898
// Has VTable
class CFuncTrackChange : public CFuncPlatRot
{
public:
	CPathTrack* m_trackTop; // 0x858	
	CPathTrack* m_trackBottom; // 0x860	
	CFuncTrackTrain* m_train; // 0x868	
	CUtlSymbolLarge m_trackTopName; // 0x870	
	CUtlSymbolLarge m_trackBottomName; // 0x878	
	CUtlSymbolLarge m_trainName; // 0x880	
	TRAIN_CODE m_code; // 0x888	
	int32_t m_targetState; // 0x88c	
	int32_t m_use; // 0x890	
	
	// Datamap fields:
	// void CFuncTrackChangeFind; // 0x0
};

