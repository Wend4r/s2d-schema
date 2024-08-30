#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1410
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier2VData : public CAI_CitadelNPCVData
{
public:
	float m_flPlayerInitialSightRange; // 0xf30	
private:
	[[maybe_unused]] uint8_t __pad0f34[0x4]; // 0xf34
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0xf38	
	// MPropertyStartGroup "Weak Points"
	CUtlVector< WeakPointParams_t > m_vecWeakPoints; // 0x1018	
	// MPropertyStartGroup "Electric Beam (Laser)"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamChargingEffect; // 0x1030	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // 0x1110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamActiveEffect; // 0x11f0	
	// MPropertyStartGroup "Stomp"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactEffect; // 0x12d0	
	float m_flTossSpeed; // 0x13b0	
	float m_flStompDamage; // 0x13b4	
	float m_flStompTossUpMagnitude; // 0x13b8	
	float m_flStunDuration; // 0x13bc	
	float m_flStompImpactRadius; // 0x13c0	
	float m_flStompImpactHeight; // 0x13c4	
	float m_flSweepRadius; // 0x13c8	
	float m_flSweepSpeed; // 0x13cc	
	float m_flSweepZScale; // 0x13d0	
	float m_flSweepMaxAngle; // 0x13d4	
	float m_flSweepMaxRange; // 0x13d8	
	float m_flSweepAdjustSpeed; // 0x13dc	
	// MPropertyStartGroup "Gun"
	float m_flBurstDuration; // 0x13e0	
	float m_flBurstCooldown; // 0x13e4	
	// MPropertyStartGroup "Modifiers"
	// MPropertyDescription "Backdoor Protection Modifier"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x13e8	
	CEmbeddedSubclass< CCitadelModifier > m_InvulModifier; // 0x13f8	
	float m_flInvulModifierRange; // 0x1408	
};

