#pragma once

#include <cstdint>

struct CPathTrack;
struct CFuncTrackTrain;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x870
// Has VTable
class CFuncTrackChange : public CFuncPlatRot
{
public:
	CPathTrack* m_trackTop; // 0x830	
	CPathTrack* m_trackBottom; // 0x838	
	CFuncTrackTrain* m_train; // 0x840	
	CUtlSymbolLarge m_trackTopName; // 0x848	
	CUtlSymbolLarge m_trackBottomName; // 0x850	
	CUtlSymbolLarge m_trainName; // 0x858	
	TRAIN_CODE m_code; // 0x860	
	int32_t m_targetState; // 0x864	
	int32_t m_use; // 0x868	
	
	// Datamap fields:
	// void CFuncTrackChangeFind; // 0x0
};

