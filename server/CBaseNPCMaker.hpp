#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// Is Abstract
class CBaseNPCMaker : public CBaseEntity
{
public:
	int32_t m_nMaxNumNPCs; // 0x4b8	
	float m_flSpawnFrequency; // 0x4bc	
	float m_flRetryFrequency; // 0x4c0	
	int32_t m_nHullCheckMode; // 0x4c4	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnSpawnNPC; // 0x4c8	
	CEntityIOOutput m_OnAllSpawned; // 0x4f0	
	CEntityIOOutput m_OnAllSpawnedDead; // 0x518	
	CEntityIOOutput m_OnAllLiveChildrenDead; // 0x540	
	int32_t m_nLiveChildren; // 0x568	
	int32_t m_nMaxLiveChildren; // 0x56c	
	int32_t m_nMinSpawnDistance; // 0x570	
	int32_t m_nSpawnTheshold; // 0x574	
	float m_flRadius; // 0x578	
	bool m_bDisabled; // 0x57c	
	bool m_bSpawning; // 0x57d	
	bool m_bZeroPitchAndRoll; // 0x57e	
private:
	[[maybe_unused]] uint8_t __pad057f[0x1]; // 0x57f
public:
	CHandle< CBaseEntity > m_hIgnoreEntity; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0584[0x4]; // 0x584
public:
	CUtlSymbolLarge m_iszIgnoreEnt; // 0x588	
	CUtlSymbolLarge m_iszDestinationGroup; // 0x590	
	CHandle< CBaseEntity > m_hSpawnEntity; // 0x598	
	CBaseNPCMaker::VisibilityCriterion_t m_CriterionVisibility; // 0x59c	
	CBaseNPCMaker::ThreeStateDist_t m_CriterionDistance; // 0x5a0	
	
	// Datamap fields:
	// void InputSpawn; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// int32_t InputSetMaxChildren; // 0x0
	// int32_t InputAddMaxChildren; // 0x0
	// int32_t InputSetMaxLiveChildren; // 0x0
	// float InputSetSpawnFrequency; // 0x0
	// void InputSpawnInRadius; // 0x0
	// void InputSpawnInLine; // 0x0
	// int32_t InputSpawnMultiple; // 0x0
	// CUtlSymbolLarge InputChangeDestinationGroup; // 0x0
	// int32_t InputSetMinimumSpawnDistance; // 0x0
	// CUtlSymbolLarge InputSetSpawnEntity; // 0x0
	// void CBaseNPCMakerMakerThink; // 0x0
};

