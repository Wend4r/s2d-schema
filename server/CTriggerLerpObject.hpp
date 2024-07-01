#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CTriggerLerpObject : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iszLerpTarget; // 0x918	
	CHandle< CBaseEntity > m_hLerpTarget; // 0x920	
private:
	[[maybe_unused]] uint8_t __pad0924[0x4]; // 0x924
public:
	CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x928	
	AttachmentHandle_t m_hLerpTargetAttachment; // 0x930	
private:
	[[maybe_unused]] uint8_t __pad0931[0x3]; // 0x931
public:
	float m_flLerpDuration; // 0x934	
	bool m_bLerpRestoreMoveType; // 0x938	
	bool m_bSingleLerpObject; // 0x939	
private:
	[[maybe_unused]] uint8_t __pad093a[0x6]; // 0x93a
public:
	CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x940	
	CUtlSymbolLarge m_iszLerpEffect; // 0x958	
	CUtlSymbolLarge m_iszLerpSound; // 0x960	
	bool m_bAttachTouchingObject; // 0x968	
private:
	[[maybe_unused]] uint8_t __pad0969[0x3]; // 0x969
public:
	CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // 0x96c	
	CEntityIOOutput m_OnLerpStarted; // 0x970	
	CEntityIOOutput m_OnLerpFinished; // 0x998	
	
	// Datamap fields:
	// void CTriggerLerpObjectLerpThink; // 0x0
	// void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
};

