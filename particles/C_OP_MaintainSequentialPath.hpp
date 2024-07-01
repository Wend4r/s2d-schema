#pragma once

#include <cstdint>

struct CPathParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1b8	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1bc	
	// MPropertyFriendlyName "cohesion strength"
	float m_flCohesionStrength; // 0x1c0	
	// MPropertyFriendlyName "control point movement tolerance"
	float m_flTolerance; // 0x1c4	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x1c8	
	// MPropertyFriendlyName "use existing particle count"
	bool m_bUseParticleCount; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x6]; // 0x1ca
public:
	CPathParameters m_PathParams; // 0x1d0	
};

