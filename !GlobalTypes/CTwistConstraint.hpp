#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 16
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
class CTwistConstraint : public CBaseConstraint
{
public:
	bool m_bInverse; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x7]; // 0x69
public:
	Quaternion m_qParentBindRotation; // 0x70	
	Quaternion m_qChildBindRotation; // 0x80	
};

