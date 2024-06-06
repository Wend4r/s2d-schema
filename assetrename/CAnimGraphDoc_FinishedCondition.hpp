#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Finished Condition"
class CAnimGraphDoc_FinishedCondition : public CAnimGraphDoc_Condition
{
public:
	FinishedConditionOption m_option; // 0x28	
	bool m_bIsFinished; // 0x2c	
};

