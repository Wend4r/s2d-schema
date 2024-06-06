#pragma once

#include <cstdint>

struct IChoreoServices;
struct PhysicsRagdollPose_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t* m_pRagdollPose"
// MNetworkVarNames "bool m_bRagdollClientSide"
class CBaseAnimGraph : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x78]; // 0x710
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0789[0x7]; // 0x789
public:
	IChoreoServices* m_pChoreoServices; // 0x790	
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad0799[0x3]; // 0x799
public:
	float m_flMaxSlopeDistance; // 0x79c	
	Vector m_vLastSlopeCheckPos; // 0x7a0	
	bool m_bAnimationUpdateScheduled; // 0x7ac	
private:
	[[maybe_unused]] uint8_t __pad07ad[0x3]; // 0x7ad
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x7b0	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07c0[0x10]; // 0x7c0
public:
	// MNetworkEnable
	PhysicsRagdollPose_t* m_pRagdollPose; // 0x7d0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x7d8	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x780
	// void CBaseAnimGraphChoreoServicesThink; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// void InputBecomeRagdoll; // 0x0
};

