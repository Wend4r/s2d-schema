#pragma once

#include <cstdint>

struct CAnimAttachment;
struct CAnimInputDamping;
struct CBlendCurve;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0xe0
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct AimMatrixOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	CAnimInputDamping m_damping; // 0x80	
	// -> m_nIndex - 0x90
	// -> m_eType - 0x92
	CPoseHandle m_poseCacheHandles[10]; // 0x90	
	AimMatrixBlendMode m_eBlendMode; // 0xb8	
	float m_flMaxYawAngle; // 0xbc	
	float m_flMaxPitchAngle; // 0xc0	
	int32_t m_nSequenceMaxFrame; // 0xc4	
	int32_t m_nBoneMaskIndex; // 0xc8	
	bool m_bTargetIsPosition; // 0xcc	
	bool m_bUseBiasAndClamp; // 0xcd	
private:
	[[maybe_unused]] uint8_t __pad00ce[0x2]; // 0xce
public:
	float m_flBiasAndClampYawOffset; // 0xd0	
	float m_flBiasAndClampPitchOffset; // 0xd4	
	CBlendCurve m_biasAndClampBlendCurve; // 0xd8	
};

