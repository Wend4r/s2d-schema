#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x988
// Has VTable
class CTriggerLerpObject : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iszLerpTarget; // 0x8e0	
	CHandle< CBaseEntity > m_hLerpTarget; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08ec[0x4]; // 0x8ec
public:
	CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x8f0	
	AttachmentHandle_t m_hLerpTargetAttachment; // 0x8f8	
private:
	[[maybe_unused]] uint8_t __pad08f9[0x3]; // 0x8f9
public:
	float m_flLerpDuration; // 0x8fc	
	bool m_bLerpRestoreMoveType; // 0x900	
	bool m_bSingleLerpObject; // 0x901	
private:
	[[maybe_unused]] uint8_t __pad0902[0x6]; // 0x902
public:
	CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x908	
	CUtlSymbolLarge m_iszLerpEffect; // 0x920	
	CUtlSymbolLarge m_iszLerpSound; // 0x928	
	bool m_bAttachTouchingObject; // 0x930	
private:
	[[maybe_unused]] uint8_t __pad0931[0x3]; // 0x931
public:
	CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // 0x934	
	CEntityIOOutput m_OnLerpStarted; // 0x938	
	CEntityIOOutput m_OnLerpFinished; // 0x960	
	
	// Datamap fields:
	// void CTriggerLerpObjectLerpThink; // 0x0
	// void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
};

