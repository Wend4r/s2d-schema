#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x518
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	bool m_bDisabled; // 0x510	
	bool m_bWaitForRefire; // 0x511	
	bool m_bTriggerOnce; // 0x512	
	bool m_bFastRetrigger; // 0x513	
	bool m_bPassthoughCaller; // 0x514	
};

