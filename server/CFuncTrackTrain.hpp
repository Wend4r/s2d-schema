#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
class CFuncTrackTrain : public CBaseModelEntity
{
public:
	CHandle< CPathTrack > m_ppath; // 0x790	
	float m_length; // 0x794	
	Vector m_vPosPrev; // 0x798	
	QAngle m_angPrev; // 0x7a4	
	Vector m_controlMins; // 0x7b0	
	Vector m_controlMaxs; // 0x7bc	
	Vector m_lastBlockPos; // 0x7c8	
	int32_t m_lastBlockTick; // 0x7d4	
	float m_flVolume; // 0x7d8	
	float m_flBank; // 0x7dc	
	float m_oldSpeed; // 0x7e0	
	float m_flBlockDamage; // 0x7e4	
	float m_height; // 0x7e8	
	float m_maxSpeed; // 0x7ec	
	float m_dir; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad07f4[0x4]; // 0x7f4
public:
	CUtlSymbolLarge m_iszSoundMove; // 0x7f8	
	CUtlSymbolLarge m_iszSoundMovePing; // 0x800	
	CUtlSymbolLarge m_iszSoundStart; // 0x808	
	CUtlSymbolLarge m_iszSoundStop; // 0x810	
	CUtlSymbolLarge m_strPathTarget; // 0x818	
	float m_flMoveSoundMinDuration; // 0x820	
	float m_flMoveSoundMaxDuration; // 0x824	
	GameTime_t m_flNextMoveSoundTime; // 0x828	
	float m_flMoveSoundMinPitch; // 0x82c	
	float m_flMoveSoundMaxPitch; // 0x830	
	TrainOrientationType_t m_eOrientationType; // 0x834	
	TrainVelocityType_t m_eVelocityType; // 0x838	
private:
	[[maybe_unused]] uint8_t __pad083c[0xc]; // 0x83c
public:
	CEntityIOOutput m_OnStart; // 0x848	
	CEntityIOOutput m_OnNext; // 0x870	
	CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x898	
	bool m_bManualSpeedChanges; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c1[0x3]; // 0x8c1
public:
	float m_flDesiredSpeed; // 0x8c4	
	GameTime_t m_flSpeedChangeTime; // 0x8c8	
	float m_flAccelSpeed; // 0x8cc	
	float m_flDecelSpeed; // 0x8d0	
	bool m_bAccelToSpeed; // 0x8d4	
private:
	[[maybe_unused]] uint8_t __pad08d5[0x3]; // 0x8d5
public:
	GameTime_t m_flNextMPSoundTime; // 0x8d8	
	
	// Datamap fields:
	// int64_t m_soundMoveGuid; // 0x83c
	// void InputStop; // 0x0
	// void InputStartForward; // 0x0
	// void InputStartBackward; // 0x0
	// void InputToggle; // 0x0
	// void InputResume; // 0x0
	// void InputReverse; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetSpeedDir; // 0x0
	// float InputSetSpeedReal; // 0x0
	// float InputSetMaxSpeed; // 0x0
	// float InputSetSpeedDirAccel; // 0x0
	// CUtlSymbolLarge InputMoveToPathNode; // 0x0
	// CUtlSymbolLarge InputTeleportToPathNode; // 0x0
	// void InputLockOrientation; // 0x0
	// void InputUnlockOrientation; // 0x0
	// void CFuncTrackTrainNext; // 0x0
	// void CFuncTrackTrainFind; // 0x0
	// void CFuncTrackTrainNearestPath; // 0x0
	// void CFuncTrackTrainDeadEnd; // 0x0
	// int32_t volume; // 0x7fffffff
};

