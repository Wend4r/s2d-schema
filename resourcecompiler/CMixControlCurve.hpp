#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Curve Node"
// MPropertyDescription "Remap a control variable through a curve that you define."
class CMixControlCurve : public CMixPropertyBase
{
public:
	float m_flInputMin; // 0x20	
	float m_flInputMax; // 0x24	
	float m_flOutputMin; // 0x28	
	float m_flOutputMax; // 0x2c	
	// MPropertySuppressField
	CPiecewiseCurve m_curve; // 0x30	
};

