#pragma once

#include <cstdint>

struct CPathKeyFrame;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x560
// Has VTable
class CBaseMoveBehavior : public CPathKeyFrame
{
public:
	int32_t m_iPositionInterpolator; // 0x520	
	int32_t m_iRotationInterpolator; // 0x524	
	float m_flAnimStartTime; // 0x528	
	float m_flAnimEndTime; // 0x52c	
	float m_flAverageSpeedAcrossFrame; // 0x530	
private:
	[[maybe_unused]] uint8_t __pad0534[0x4]; // 0x534
public:
	CPathKeyFrame* m_pCurrentKeyFrame; // 0x538	
	CPathKeyFrame* m_pTargetKeyFrame; // 0x540	
	CPathKeyFrame* m_pPreKeyFrame; // 0x548	
	CPathKeyFrame* m_pPostKeyFrame; // 0x550	
	float m_flTimeIntoFrame; // 0x558	
	int32_t m_iDirection; // 0x55c	
};

