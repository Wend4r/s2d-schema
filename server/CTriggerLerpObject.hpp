#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa08
// Has VTable
class CTriggerLerpObject : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iszLerpTarget; // 0x960	
	CHandle< CBaseEntity > m_hLerpTarget; // 0x968	
private:
	[[maybe_unused]] uint8_t __pad096c[0x4]; // 0x96c
public:
	CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x970	
	AttachmentHandle_t m_hLerpTargetAttachment; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x3]; // 0x979
public:
	float m_flLerpDuration; // 0x97c	
	bool m_bLerpRestoreMoveType; // 0x980	
	bool m_bSingleLerpObject; // 0x981	
private:
	[[maybe_unused]] uint8_t __pad0982[0x6]; // 0x982
public:
	CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x988	
	CUtlSymbolLarge m_iszLerpEffect; // 0x9a0	
	CUtlSymbolLarge m_iszLerpSound; // 0x9a8	
	bool m_bAttachTouchingObject; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b1[0x3]; // 0x9b1
public:
	CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // 0x9b4	
	CEntityIOOutput m_OnLerpStarted; // 0x9b8	
	CEntityIOOutput m_OnLerpFinished; // 0x9e0	
	
	// Datamap fields:
	// void CTriggerLerpObjectLerpThink; // 0x0
	// void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
};

