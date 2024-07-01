#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x340
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	bool m_bUseWorldLocation; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c1[0x1]; // 0x1c1
public:
	// MPropertyFriendlyName "randomize"
	bool m_bRandomize; // 0x1c2	
	// MPropertyFriendlyName "only set orientation once"
	bool m_bSetOnce; // 0x1c3	
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x1c4	
	// MPropertyFriendlyName "control point to offset orientation from"
	int32_t m_nHeadLocation; // 0x1c8	
	// MPropertyFriendlyName "pitch yaw roll"
	QAngle m_vecRotation; // 0x1cc	
	// MPropertyFriendlyName "pitch yaw roll max"
	QAngle m_vecRotationB; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01e4[0x4]; // 0x1e4
public:
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x1e8	
};

