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
// MPropertyFriendlyName "Wait For Cursors With Tag"
// MPropertyDescription "Causes this execution cursor to wait for the completion of other cursors with the given tag. Can optionally kill the tag while waiting."
// MPulseEditorHeaderIcon
class CPulseCell_WaitForCursorsWithTag : public CPulseCell_WaitForCursorsWithTagBase
{
public:
	// MPropertyDescription "Apply the same tag we're waiting on to the resulting cursor upon wait completion. Can be used to wait on our result cursor with the same tag."
	bool m_bTagSelfWhenComplete; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	// MPropertyDescription "When we start waiting, how should we handle existing cursors?"
	PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x84	
};

