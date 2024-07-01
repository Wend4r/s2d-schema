#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x898
// Has VTable
class CFuncTrackTrain : public CBaseModelEntity
{
public:
	CHandle< CPathTrack > m_ppath; // 0x748	
	float m_length; // 0x74c	
	Vector m_vPosPrev; // 0x750	
	QAngle m_angPrev; // 0x75c	
	Vector m_controlMins; // 0x768	
	Vector m_controlMaxs; // 0x774	
	Vector m_lastBlockPos; // 0x780	
	int32_t m_lastBlockTick; // 0x78c	
	float m_flVolume; // 0x790	
	float m_flBank; // 0x794	
	float m_oldSpeed; // 0x798	
	float m_flBlockDamage; // 0x79c	
	float m_height; // 0x7a0	
	float m_maxSpeed; // 0x7a4	
	float m_dir; // 0x7a8	
private:
	[[maybe_unused]] uint8_t __pad07ac[0x4]; // 0x7ac
public:
	CUtlSymbolLarge m_iszSoundMove; // 0x7b0	
	CUtlSymbolLarge m_iszSoundMovePing; // 0x7b8	
	CUtlSymbolLarge m_iszSoundStart; // 0x7c0	
	CUtlSymbolLarge m_iszSoundStop; // 0x7c8	
	CUtlSymbolLarge m_strPathTarget; // 0x7d0	
	float m_flMoveSoundMinDuration; // 0x7d8	
	float m_flMoveSoundMaxDuration; // 0x7dc	
	GameTime_t m_flNextMoveSoundTime; // 0x7e0	
	float m_flMoveSoundMinPitch; // 0x7e4	
	float m_flMoveSoundMaxPitch; // 0x7e8	
	TrainOrientationType_t m_eOrientationType; // 0x7ec	
	TrainVelocityType_t m_eVelocityType; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad07f4[0xc]; // 0x7f4
public:
	CEntityIOOutput m_OnStart; // 0x800	
	CEntityIOOutput m_OnNext; // 0x828	
	CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x850	
	bool m_bManualSpeedChanges; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad0879[0x3]; // 0x879
public:
	float m_flDesiredSpeed; // 0x87c	
	GameTime_t m_flSpeedChangeTime; // 0x880	
	float m_flAccelSpeed; // 0x884	
	float m_flDecelSpeed; // 0x888	
	bool m_bAccelToSpeed; // 0x88c	
private:
	[[maybe_unused]] uint8_t __pad088d[0x3]; // 0x88d
public:
	GameTime_t m_flNextMPSoundTime; // 0x890	
	
	// Datamap fields:
	// int64_t m_soundMoveGuid; // 0x7f4
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

