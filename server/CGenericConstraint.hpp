#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x668
// Has VTable
class CGenericConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x8]; // 0x538
public:
	JointMotion_t m_nLinearMotionX; // 0x540	
	JointMotion_t m_nLinearMotionY; // 0x544	
	JointMotion_t m_nLinearMotionZ; // 0x548	
	float m_flLinearFrequencyX; // 0x54c	
	float m_flLinearFrequencyY; // 0x550	
	float m_flLinearFrequencyZ; // 0x554	
	float m_flLinearDampingRatioX; // 0x558	
	float m_flLinearDampingRatioY; // 0x55c	
	float m_flLinearDampingRatioZ; // 0x560	
	float m_flMaxLinearImpulseX; // 0x564	
	float m_flMaxLinearImpulseY; // 0x568	
	float m_flMaxLinearImpulseZ; // 0x56c	
	float m_flBreakAfterTimeX; // 0x570	
	float m_flBreakAfterTimeY; // 0x574	
	float m_flBreakAfterTimeZ; // 0x578	
	GameTime_t m_flBreakAfterTimeStartTimeX; // 0x57c	
	GameTime_t m_flBreakAfterTimeStartTimeY; // 0x580	
	GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x584	
	float m_flBreakAfterTimeThresholdX; // 0x588	
	float m_flBreakAfterTimeThresholdY; // 0x58c	
	float m_flBreakAfterTimeThresholdZ; // 0x590	
	float m_flNotifyForceX; // 0x594	
	float m_flNotifyForceY; // 0x598	
	float m_flNotifyForceZ; // 0x59c	
	float m_flNotifyForceMinTimeX; // 0x5a0	
	float m_flNotifyForceMinTimeY; // 0x5a4	
	float m_flNotifyForceMinTimeZ; // 0x5a8	
	GameTime_t m_flNotifyForceLastTimeX; // 0x5ac	
	GameTime_t m_flNotifyForceLastTimeY; // 0x5b0	
	GameTime_t m_flNotifyForceLastTimeZ; // 0x5b4	
	bool m_bAxisNotifiedX; // 0x5b8	
	bool m_bAxisNotifiedY; // 0x5b9	
	bool m_bAxisNotifiedZ; // 0x5ba	
private:
	[[maybe_unused]] uint8_t __pad05bb[0x1]; // 0x5bb
public:
	JointMotion_t m_nAngularMotionX; // 0x5bc	
	JointMotion_t m_nAngularMotionY; // 0x5c0	
	JointMotion_t m_nAngularMotionZ; // 0x5c4	
	float m_flAngularFrequencyX; // 0x5c8	
	float m_flAngularFrequencyY; // 0x5cc	
	float m_flAngularFrequencyZ; // 0x5d0	
	float m_flAngularDampingRatioX; // 0x5d4	
	float m_flAngularDampingRatioY; // 0x5d8	
	float m_flAngularDampingRatioZ; // 0x5dc	
	float m_flMaxAngularImpulseX; // 0x5e0	
	float m_flMaxAngularImpulseY; // 0x5e4	
	float m_flMaxAngularImpulseZ; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	CEntityIOOutput m_NotifyForceReachedX; // 0x5f0	
	CEntityIOOutput m_NotifyForceReachedY; // 0x618	
	CEntityIOOutput m_NotifyForceReachedZ; // 0x640	
	
	// Datamap fields:
	// void CGenericConstraintUpdateThink; // 0x0
};

