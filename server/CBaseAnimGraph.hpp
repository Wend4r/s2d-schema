#pragma once

#include <cstdint>

struct IChoreoServices;
struct PhysicsRagdollPose_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a8
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
	[[maybe_unused]] uint8_t __pad0790[0x78]; // 0x790
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x808	
private:
	[[maybe_unused]] uint8_t __pad0809[0x7]; // 0x809
public:
	IChoreoServices* m_pChoreoServices; // 0x810	
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad0819[0x3]; // 0x819
public:
	float m_flMaxSlopeDistance; // 0x81c	
	Vector m_vLastSlopeCheckPos; // 0x820	
	bool m_bAnimationUpdateScheduled; // 0x82c	
private:
	[[maybe_unused]] uint8_t __pad082d[0x3]; // 0x82d
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x830	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x83c	
private:
	[[maybe_unused]] uint8_t __pad0840[0x10]; // 0x840
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0x850	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad0879[0x127]; // 0x879
public:
	int32_t m_nLastDestructiblePartDestroyedAnimgraphSetTick; // 0x9a0	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x800
	// void CBaseAnimGraphChoreoServicesThink; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// void InputBecomeRagdoll; // 0x0
};

