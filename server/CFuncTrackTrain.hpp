#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x860
// Has VTable
class CFuncTrackTrain : public CBaseModelEntity
{
public:
	CHandle< CPathTrack > m_ppath; // 0x710	
	float m_length; // 0x714	
	Vector m_vPosPrev; // 0x718	
	QAngle m_angPrev; // 0x724	
	Vector m_controlMins; // 0x730	
	Vector m_controlMaxs; // 0x73c	
	Vector m_lastBlockPos; // 0x748	
	int32_t m_lastBlockTick; // 0x754	
	float m_flVolume; // 0x758	
	float m_flBank; // 0x75c	
	float m_oldSpeed; // 0x760	
	float m_flBlockDamage; // 0x764	
	float m_height; // 0x768	
	float m_maxSpeed; // 0x76c	
	float m_dir; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0774[0x4]; // 0x774
public:
	CUtlSymbolLarge m_iszSoundMove; // 0x778	
	CUtlSymbolLarge m_iszSoundMovePing; // 0x780	
	CUtlSymbolLarge m_iszSoundStart; // 0x788	
	CUtlSymbolLarge m_iszSoundStop; // 0x790	
	CUtlSymbolLarge m_strPathTarget; // 0x798	
	float m_flMoveSoundMinDuration; // 0x7a0	
	float m_flMoveSoundMaxDuration; // 0x7a4	
	GameTime_t m_flNextMoveSoundTime; // 0x7a8	
	float m_flMoveSoundMinPitch; // 0x7ac	
	float m_flMoveSoundMaxPitch; // 0x7b0	
	TrainOrientationType_t m_eOrientationType; // 0x7b4	
	TrainVelocityType_t m_eVelocityType; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07bc[0xc]; // 0x7bc
public:
	CEntityIOOutput m_OnStart; // 0x7c8	
	CEntityIOOutput m_OnNext; // 0x7f0	
	CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x818	
	bool m_bManualSpeedChanges; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0841[0x3]; // 0x841
public:
	float m_flDesiredSpeed; // 0x844	
	GameTime_t m_flSpeedChangeTime; // 0x848	
	float m_flAccelSpeed; // 0x84c	
	float m_flDecelSpeed; // 0x850	
	bool m_bAccelToSpeed; // 0x854	
private:
	[[maybe_unused]] uint8_t __pad0855[0x3]; // 0x855
public:
	GameTime_t m_flNextMPSoundTime; // 0x858	
	
	// Datamap fields:
	// int64_t m_soundMoveGuid; // 0x7bc
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

