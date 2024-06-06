#pragma once

#include <cstdint>

struct CPathTrack;
struct CFuncTrackTrain;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
class CFuncTrackChange : public CFuncPlatRot
{
public:
	CPathTrack* m_trackTop; // 0x7d8	
	CPathTrack* m_trackBottom; // 0x7e0	
	CFuncTrackTrain* m_train; // 0x7e8	
	CUtlSymbolLarge m_trackTopName; // 0x7f0	
	CUtlSymbolLarge m_trackBottomName; // 0x7f8	
	CUtlSymbolLarge m_trainName; // 0x800	
	TRAIN_CODE m_code; // 0x808	
	int32_t m_targetState; // 0x80c	
	int32_t m_use; // 0x810	
	
	// Datamap fields:
	// void CFuncTrackChangeFind; // 0x0
};

