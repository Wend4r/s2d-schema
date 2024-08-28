#pragma once

#include <cstdint>

struct CAnimParamHandle;
struct AimCameraOpFixedSettings_t;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAimCameraUpdateNode : public CUnaryUpdateNode
{
public:
	CAnimParamHandle m_hParameterPosition; // 0x68	
	CAnimParamHandle m_hParameterOrientation; // 0x6a	
	CAnimParamHandle m_hParameterSpineRotationWeight; // 0x6c	
	CAnimParamHandle m_hParameterPelvisOffset; // 0x6e	
	CAnimParamHandle m_hParameterUseIK; // 0x70	
	CAnimParamHandle m_hParameterCameraOnly; // 0x72	
	CAnimParamHandle m_hParameterWeaponDepenetrationDistance; // 0x74	
	CAnimParamHandle m_hParameterWeaponDepenetrationDelta; // 0x76	
	CAnimParamHandle m_hParameterCameraClearanceDistance; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007a[0x6]; // 0x7a
public:
	AimCameraOpFixedSettings_t m_opFixedSettings; // 0x80	
};

