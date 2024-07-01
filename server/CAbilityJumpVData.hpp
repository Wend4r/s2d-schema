#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityJumpVData : public CitadelAbilityVData
{
public:
	float m_flShootingLockoutAfterJump; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e4[0x4]; // 0x14e4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // 0x15c8	
	// MPropertyStartGroup "Air Jump"
	CSoundEventName m_AirJumpExecutedSound; // 0x16a8	
	float m_flMantleRefundWindow; // 0x16b8	
	float m_flZiplineRefundWindow; // 0x16bc	
	float m_flLateJumpGraceWindow; // 0x16c0	
	// MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
	float m_flMaxSpeedDelta; // 0x16c4	
	// MPropertyStartGroup "Roll Jump"
	CSoundEventName m_strDashJumpActivate; // 0x16c8	
	float m_flDashJumpStartTime; // 0x16d8	
	float m_flDashJumpEndTime; // 0x16dc	
	// MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
	float m_flDashJumpDistanceInMeters; // 0x16e0	
private:
	[[maybe_unused]] uint8_t __pad16e4[0x4]; // 0x16e4
public:
	float m_flDashJumpVerticalSpeed; // 0x16e8	
	float m_flDashJumpMissMaxSpeed; // 0x16ec	
	float m_flDashJumpMantleDisableTime; // 0x16f0	
};

