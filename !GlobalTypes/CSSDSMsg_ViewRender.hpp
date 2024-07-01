#pragma once

#include <cstdint>

struct SceneViewId_t;
// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CSSDSMsg_ViewRender
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
};

