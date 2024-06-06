#pragma once

#include <cstdint>

struct CPulse_ResumePoint;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_Outflow_PlaySceneBase : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_OnFinished; // 0x48	
	CPulse_ResumePoint m_OnCanceled; // 0x78	
	CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0xa8	
};

