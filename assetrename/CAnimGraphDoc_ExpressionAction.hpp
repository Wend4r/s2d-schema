#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ExpressionAction : public CAnimGraphDoc_Action
{
public:
	CUtlString m_paramName; // 0x28	
	AnimParamID m_param; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	CUtlString m_expression; // 0x38	
};

