#pragma once

#include <cstdint>

struct CPathTrack;
struct CFuncTrackTrain;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x850
// Has VTable
class CFuncTrackChange : public CFuncPlatRot
{
public:
	CPathTrack* m_trackTop; // 0x810	
	CPathTrack* m_trackBottom; // 0x818	
	CFuncTrackTrain* m_train; // 0x820	
	CUtlSymbolLarge m_trackTopName; // 0x828	
	CUtlSymbolLarge m_trackBottomName; // 0x830	
	CUtlSymbolLarge m_trainName; // 0x838	
	TRAIN_CODE m_code; // 0x840	
	int32_t m_targetState; // 0x844	
	int32_t m_use; // 0x848	
	
	// Datamap fields:
	// void CFuncTrackChangeFind; // 0x0
};

