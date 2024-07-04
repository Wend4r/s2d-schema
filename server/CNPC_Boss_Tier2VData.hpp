#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x12e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier2VData : public CAI_CitadelNPCVData
{
public:
	float m_flPlayerInitialSightRange; // 0xe18	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0x4]; // 0xe1c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0xe20	
	// MPropertyStartGroup "Weak Points"
	CUtlVector< WeakPointParams_t > m_vecWeakPoints; // 0xf00	
	// MPropertyStartGroup "Electric Beam (Laser)"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamChargingEffect; // 0xf18	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // 0xff8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamActiveEffect; // 0x10d8	
	// MPropertyStartGroup "Stomp"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactEffect; // 0x11b8	
	float m_flTossSpeed; // 0x1298	
	float m_flStompDamage; // 0x129c	
	float m_flStompTossUpMagnitude; // 0x12a0	
	float m_flStunDuration; // 0x12a4	
	float m_flStompImpactRadius; // 0x12a8	
	float m_flStompImpactHeight; // 0x12ac	
	float m_flSweepRadius; // 0x12b0	
	float m_flSweepSpeed; // 0x12b4	
	float m_flSweepZScale; // 0x12b8	
	float m_flSweepMaxAngle; // 0x12bc	
	float m_flSweepMaxRange; // 0x12c0	
	float m_flSweepAdjustSpeed; // 0x12c4	
	// MPropertyStartGroup "Gun"
	float m_flBurstDuration; // 0x12c8	
	float m_flBurstCooldown; // 0x12cc	
	// MPropertyDescription "Backdoor Protection Modifier"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x12d0	
};

