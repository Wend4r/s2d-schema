#pragma once

#include <cstdint>

struct CAnimAttachment;
struct CAnimInputDamping;
struct CBlendCurve;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0xf0
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct AimMatrixOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	CAnimInputDamping m_damping; // 0x80	
	// -> m_nIndex - 0x98
	// -> m_eType - 0x9a
	CPoseHandle m_poseCacheHandles[10]; // 0x98	
	AimMatrixBlendMode m_eBlendMode; // 0xc0	
	float m_flMaxYawAngle; // 0xc4	
	float m_flMaxPitchAngle; // 0xc8	
	int32_t m_nSequenceMaxFrame; // 0xcc	
	int32_t m_nBoneMaskIndex; // 0xd0	
	bool m_bTargetIsPosition; // 0xd4	
	bool m_bUseBiasAndClamp; // 0xd5	
private:
	[[maybe_unused]] uint8_t __pad00d6[0x2]; // 0xd6
public:
	float m_flBiasAndClampYawOffset; // 0xd8	
	float m_flBiasAndClampPitchOffset; // 0xdc	
	CBlendCurve m_biasAndClampBlendCurve; // 0xe0	
};

