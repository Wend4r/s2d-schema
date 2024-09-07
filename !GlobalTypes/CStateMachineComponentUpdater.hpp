#pragma once

#include <cstdint>

struct CAnimStateMachineUpdater;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
class CStateMachineComponentUpdater : public CAnimComponentUpdater
{
public:
	// -> m_states - 0x38
	// -> m_transitions - 0x50
	// -> m_startStateIndex - 0x80
	CAnimStateMachineUpdater m_stateMachine; // 0x30	
};

