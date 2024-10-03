#pragma once

#include <cstdint>

struct IChoreoServices;
struct PhysicsRagdollPose_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x960
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
// MNetworkVarNames "bool m_bRagdollClientSide"
class CBaseAnimGraph : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0750[0x78]; // 0x750
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07c9[0x7]; // 0x7c9
public:
	IChoreoServices* m_pChoreoServices; // 0x7d0	
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07d9[0x3]; // 0x7d9
public:
	float m_flMaxSlopeDistance; // 0x7dc	
	Vector m_vLastSlopeCheckPos; // 0x7e0	
	bool m_bAnimationUpdateScheduled; // 0x7ec	
private:
	[[maybe_unused]] uint8_t __pad07ed[0x3]; // 0x7ed
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x7f0	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x7fc	
private:
	[[maybe_unused]] uint8_t __pad0800[0x10]; // 0x800
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0x810	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x838	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x7c0
	// void CBaseAnimGraphChoreoServicesThink; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// void InputBecomeRagdoll; // 0x0
};

