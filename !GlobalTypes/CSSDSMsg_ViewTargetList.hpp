#pragma once

#include <cstdint>

struct SceneViewId_t;
// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
class CSSDSMsg_ViewTargetList
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
	CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18	
};

