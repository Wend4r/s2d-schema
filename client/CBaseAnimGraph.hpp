#pragma once

#include <cstdint>

struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf88
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
// MNetworkVarNames "bool m_bRagdollClientSide"
class CBaseAnimGraph : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0d28[0x78]; // 0xd28
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0xda0	
private:
	[[maybe_unused]] uint8_t __pad0da1[0x1]; // 0xda1
public:
	bool m_bSuppressAnimEventSounds; // 0xda2	
private:
	[[maybe_unused]] uint8_t __pad0da3[0xd]; // 0xda3
public:
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0xdb0	
private:
	[[maybe_unused]] uint8_t __pad0db1[0x3]; // 0xdb1
public:
	float m_flMaxSlopeDistance; // 0xdb4	
	Vector m_vLastSlopeCheckPos; // 0xdb8	
	bool m_bAnimationUpdateScheduled; // 0xdc4	
private:
	[[maybe_unused]] uint8_t __pad0dc5[0x3]; // 0xdc5
public:
	// MNetworkEnable
	Vector m_vecForce; // 0xdc8	
	// MNetworkEnable
	int32_t m_nForceBone; // 0xdd4	
	CBaseAnimGraph* m_pClientsideRagdoll; // 0xdd8	
	bool m_bBuiltRagdoll; // 0xde0	
private:
	[[maybe_unused]] uint8_t __pad0de1[0x17]; // 0xde1
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0xdf8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0xe40	
private:
	[[maybe_unused]] uint8_t __pad0e41[0xf]; // 0xe41
public:
	bool m_bHasAnimatedMaterialAttributes; // 0xe50	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0xd98
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// bool InputDisableAnimEventSounds; // 0x0
};

