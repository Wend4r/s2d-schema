#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x140
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance
{
public:
	bool m_bIsRunningUnitTests; // 0x110	
	bool m_bExplicitTimeStepping; // 0x111	
	bool m_bExpectingToDestroyWithYieldedCursors; // 0x112	
	bool m_bQuietTracepoints; // 0x113	
	bool m_bExpectingCursorTerminatedDueToMaxInstructions; // 0x114	
private:
	[[maybe_unused]] uint8_t __pad0115[0x3]; // 0x115
public:
	int32_t m_nCursorsTerminatedDueToMaxInstructions; // 0x118	
	int32_t m_nNextValidateIndex; // 0x11c	
	CUtlVector< CUtlString > m_Tracepoints; // 0x120	
	bool m_bTestYesOrNoPath; // 0x138	
};

