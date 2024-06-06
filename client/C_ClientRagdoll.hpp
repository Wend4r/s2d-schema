#pragma once

#include <cstdint>

struct GameTime_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf68
// Has VTable
class C_ClientRagdoll : public CBaseAnimGraph
{
public:
	bool m_bFadeOut; // 0xed0	
	bool m_bImportant; // 0xed1	
private:
	[[maybe_unused]] uint8_t __pad0ed2[0x2]; // 0xed2
public:
	GameTime_t m_flEffectTime; // 0xed4	
	GameTime_t m_gibDespawnTime; // 0xed8	
	int32_t m_iCurrentFriction; // 0xedc	
	int32_t m_iMinFriction; // 0xee0	
	int32_t m_iMaxFriction; // 0xee4	
	int32_t m_iFrictionAnimState; // 0xee8	
	bool m_bReleaseRagdoll; // 0xeec	
	AttachmentHandle_t m_iEyeAttachment; // 0xeed	
	bool m_bFadingOut; // 0xeee	
private:
	[[maybe_unused]] uint8_t __pad0eef[0x1]; // 0xeef
public:
	float m_flScaleEnd[10]; // 0xef0	
	GameTime_t m_flScaleTimeStart[10]; // 0xf18	
	GameTime_t m_flScaleTimeEnd[10]; // 0xf40	
	
	// Datamap fields:
	// Color m_clrRender; // 0xa7b
};

