#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x12c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier2VData : public CAI_CitadelNPCVData
{
public:
	float m_flPlayerInitialSightRange; // 0xe00	
private:
	[[maybe_unused]] uint8_t __pad0e04[0x4]; // 0xe04
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0xe08	
	// MPropertyStartGroup "Weak Points"
	CUtlVector< WeakPointParams_t > m_vecWeakPoints; // 0xee8	
	// MPropertyStartGroup "Electric Beam (Laser)"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamChargingEffect; // 0xf00	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // 0xfe0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamActiveEffect; // 0x10c0	
	// MPropertyStartGroup "Stomp"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactEffect; // 0x11a0	
	float m_flTossSpeed; // 0x1280	
	float m_flStompDamage; // 0x1284	
	float m_flStompTossUpMagnitude; // 0x1288	
	float m_flStunDuration; // 0x128c	
	float m_flStompImpactRadius; // 0x1290	
	float m_flStompImpactHeight; // 0x1294	
	float m_flSweepRadius; // 0x1298	
	float m_flSweepSpeed; // 0x129c	
	float m_flSweepZScale; // 0x12a0	
	float m_flSweepMaxAngle; // 0x12a4	
	float m_flSweepMaxRange; // 0x12a8	
	float m_flSweepAdjustSpeed; // 0x12ac	
	// MPropertyStartGroup "Gun"
	float m_flBurstDuration; // 0x12b0	
	float m_flBurstCooldown; // 0x12b4	
	// MPropertyDescription "Backdoor Protection Modifier"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x12b8	
};

