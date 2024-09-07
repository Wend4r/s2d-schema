#pragma once

#include <cstdint>

struct CParamSpanUpdater;
struct CAnimInputDamping;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xf0
// Has VTable
// 
// MGetKV3ClassDefaults
class CBlend2DUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< BlendItem_t > m_items; // 0x60	
	CUtlVector< TagSpan_t > m_tags; // 0x78	
	CParamSpanUpdater m_paramSpans; // 0x90	
	CUtlVector< int32 > m_nodeItemIndices; // 0xa8	
	CAnimInputDamping m_damping; // 0xc0	
	AnimValueSource m_blendSourceX; // 0xd0	
	CAnimParamHandle m_paramX; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d6[0x2]; // 0xd6
public:
	AnimValueSource m_blendSourceY; // 0xd8	
	CAnimParamHandle m_paramY; // 0xdc	
private:
	[[maybe_unused]] uint8_t __pad00de[0x2]; // 0xde
public:
	Blend2DMode m_eBlendMode; // 0xe0	
	float m_playbackSpeed; // 0xe4	
	bool m_bLoop; // 0xe8	
	bool m_bLockBlendOnReset; // 0xe9	
	bool m_bLockWhenWaning; // 0xea	
	bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xeb	
};

