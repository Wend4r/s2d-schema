#pragma once

#include <cstdint>

struct CAnimUpdateNodeRef;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
class CStanceOverrideUpdateNode : public CUnaryUpdateNode
{
public:
	CUtlVector< StanceInfo_t > m_footStanceInfo; // 0x68	
	CAnimUpdateNodeRef m_pStanceSourceNode; // 0x80	
	CAnimParamHandle m_hParameter; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0092[0x2]; // 0x92
public:
	StanceOverrideMode m_eMode; // 0x94	
};

