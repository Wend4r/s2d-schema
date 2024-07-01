#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CAI_Relationship : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	CUtlSymbolLarge m_iszSubject; // 0x4c0	
	CUtlSymbolLarge m_iszSubjectClass; // 0x4c8	
	Class_T m_nSubjectClassifyAs; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_iszTargetClass; // 0x4d8	
	Class_T m_nTargetClassifyAs; // 0x4e0	
	int32_t m_iDisposition; // 0x4e4	
	int32_t m_iRank; // 0x4e8	
	bool m_fStartActive; // 0x4ec	
	bool m_bIsActive; // 0x4ed	
private:
	[[maybe_unused]] uint8_t __pad04ee[0x2]; // 0x4ee
public:
	int32_t m_iPreviousDisposition; // 0x4f0	
	float m_flRadius; // 0x4f4	
	int32_t m_iPreviousRank; // 0x4f8	
	bool m_bReciprocal; // 0x4fc	
	
	// Datamap fields:
	// void CAI_RelationshipApplyRelationshipThink; // 0x0
	// void InputApplyRelationship; // 0x0
	// void InputRevertRelationship; // 0x0
	// void InputRevertToDefaultRelationship; // 0x0
};

