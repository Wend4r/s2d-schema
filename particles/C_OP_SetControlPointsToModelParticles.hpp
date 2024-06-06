#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1b8	
	// MPropertyFriendlyName "attachment to follow"
	char m_AttachmentName[128]; // 0x238	
	// MPropertyFriendlyName "First control point to set"
	int32_t m_nFirstControlPoint; // 0x2b8	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x2bc	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x2c0	
	// MPropertyFriendlyName "use skinning instead of hitboxes"
	bool m_bSkin; // 0x2c4	
	// MPropertyFriendlyName "follow attachment"
	bool m_bAttachment; // 0x2c5	
};

