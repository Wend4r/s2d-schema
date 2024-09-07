#pragma once

#include <cstdint>

struct CPathKeyFrame;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x570
// Has VTable
class CBaseMoveBehavior : public CPathKeyFrame
{
public:
	int32_t m_iPositionInterpolator; // 0x530	
	int32_t m_iRotationInterpolator; // 0x534	
	float m_flAnimStartTime; // 0x538	
	float m_flAnimEndTime; // 0x53c	
	float m_flAverageSpeedAcrossFrame; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x4]; // 0x544
public:
	CPathKeyFrame* m_pCurrentKeyFrame; // 0x548	
	CPathKeyFrame* m_pTargetKeyFrame; // 0x550	
	CPathKeyFrame* m_pPreKeyFrame; // 0x558	
	CPathKeyFrame* m_pPostKeyFrame; // 0x560	
	float m_flTimeIntoFrame; // 0x568	
	int32_t m_iDirection; // 0x56c	
};

