#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Cursor Queue"
// MPropertyDescription "Causes each execution cursor to wait for the completion of all prior cursors that have visited this node. Use this to safely support multiple triggers to areas of the graph that take time to complete."
// MPulseEditorHeaderIcon
class CPulseCell_CursorQueue : public CPulseCell_WaitForCursorsWithTagBase
{
public:
	// MPropertyDescription "Any cursors above this count will wait, up to the limit."
	int32_t m_nCursorsAllowedToRunParallel; // 0x80	
};

