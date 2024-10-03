#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c8
// Has VTable
class CTriggerLerpObject : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iszLerpTarget; // 0x920	
	CHandle< CBaseEntity > m_hLerpTarget; // 0x928	
private:
	[[maybe_unused]] uint8_t __pad092c[0x4]; // 0x92c
public:
	CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x930	
	AttachmentHandle_t m_hLerpTargetAttachment; // 0x938	
private:
	[[maybe_unused]] uint8_t __pad0939[0x3]; // 0x939
public:
	float m_flLerpDuration; // 0x93c	
	bool m_bLerpRestoreMoveType; // 0x940	
	bool m_bSingleLerpObject; // 0x941	
private:
	[[maybe_unused]] uint8_t __pad0942[0x6]; // 0x942
public:
	CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x948	
	CUtlSymbolLarge m_iszLerpEffect; // 0x960	
	CUtlSymbolLarge m_iszLerpSound; // 0x968	
	bool m_bAttachTouchingObject; // 0x970	
private:
	[[maybe_unused]] uint8_t __pad0971[0x3]; // 0x971
public:
	CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // 0x974	
	CEntityIOOutput m_OnLerpStarted; // 0x978	
	CEntityIOOutput m_OnLerpFinished; // 0x9a0	
	
	// Datamap fields:
	// void CTriggerLerpObjectLerpThink; // 0x0
	// void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
};

