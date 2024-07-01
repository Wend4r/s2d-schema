#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance
{
public:
	bool m_bIsRunningUnitTests; // 0xf8	
	bool m_bExplicitTimeStepping; // 0xf9	
	bool m_bExpectingToDestroyWithYieldedCursors; // 0xfa	
private:
	[[maybe_unused]] uint8_t __pad00fb[0x1]; // 0xfb
public:
	int32_t m_nNextValidateIndex; // 0xfc	
	CUtlVector< CUtlString > m_Tracepoints; // 0x100	
	bool m_bTestYesOrNoPath; // 0x118	
	
	// Static fields:
	static double &Get_s_flExplicitCurTime(){return *reinterpret_cast<double*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulseGraphInstance_TestDomain")->m_static_fields[0]->m_instance);};
};

