#pragma once

#include <cstdint>

struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf80
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
	[[maybe_unused]] uint8_t __pad0d20[0x78]; // 0xd20
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0xd98	
private:
	[[maybe_unused]] uint8_t __pad0d99[0x1]; // 0xd99
public:
	bool m_bSuppressAnimEventSounds; // 0xd9a	
private:
	[[maybe_unused]] uint8_t __pad0d9b[0xd]; // 0xd9b
public:
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0xda8	
private:
	[[maybe_unused]] uint8_t __pad0da9[0x3]; // 0xda9
public:
	float m_flMaxSlopeDistance; // 0xdac	
	Vector m_vLastSlopeCheckPos; // 0xdb0	
	bool m_bAnimationUpdateScheduled; // 0xdbc	
private:
	[[maybe_unused]] uint8_t __pad0dbd[0x3]; // 0xdbd
public:
	// MNetworkEnable
	Vector m_vecForce; // 0xdc0	
	// MNetworkEnable
	int32_t m_nForceBone; // 0xdcc	
	CBaseAnimGraph* m_pClientsideRagdoll; // 0xdd0	
	bool m_bBuiltRagdoll; // 0xdd8	
private:
	[[maybe_unused]] uint8_t __pad0dd9[0x17]; // 0xdd9
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0xdf0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0xe38	
private:
	[[maybe_unused]] uint8_t __pad0e39[0xf]; // 0xe39
public:
	bool m_bHasAnimatedMaterialAttributes; // 0xe48	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0xd90
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// bool InputDisableAnimEventSounds; // 0x0
};

