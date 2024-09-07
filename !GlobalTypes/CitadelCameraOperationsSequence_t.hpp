#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
// 
// MGetKV3ClassDefaults
struct CitadelCameraOperationsSequence_t
{
public:
	// MPropertySuppressField
	CUtlStringToken m_strToken; // 0x0	
	// MPropertySuppressField
	bool m_bIsEmpty; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	CUtlVector< CitadelCameraDistanceOperationDef_t > m_vecDistanceOperations; // 0x8	
	CUtlVector< CitadelCameraFOVOperationDef_t > m_vecFOVOperations; // 0x20	
	CUtlVector< CitadelCameraTargetPosOperationDef_t > m_vecTargetPosOperations; // 0x38	
	CUtlVector< CitadelCameraVertOffsetOperationDef_t > m_vecVertOffsetOperations; // 0x50	
	CUtlVector< CitadelCameraHorizOffsetOperationDef_t > m_vecHorizOffsetOperations; // 0x68	
};

