#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x438
// Has VTable
class CAI_BaseNPCGraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamRef< char* > m_sCurrScheduleName; // 0x18	
	CAnimGraphParamRef< char* > m_sCurrTaskName; // 0x38	
	CAnimGraphParamOptionalRef< char* > m_sTaskHandshakeType; // 0x58	
	CAnimGraphParamRef< char* > m_sTaskHandshakeTypeShared; // 0x78	
	CAnimGraphParamRef< bool > m_bTaskHandshakeRestart; // 0x98	
	CAnimGraphParamOptionalRef< char* > m_sMovementHandshakeType; // 0xb0	
	CAnimGraphParamRef< char* > m_sMovementHandshakeTypeShared; // 0xd0	
	CAnimGraphParamRef< bool > m_bMovementHandshakeRestart; // 0xf0	
	CAnimGraphParamOptionalRef< char* > m_sNavLinkType; // 0x108	
	CAnimGraphParamRef< char* > m_sNavLinkTypeShared; // 0x128	
	CAnimGraphParamOptionalRef< float32 > m_flPathDistanceToNavLink; // 0x148	
	CAnimGraphParamOptionalRef< bool > m_bNavLinkIsOnPath; // 0x160	
	CAnimGraphParamOptionalRef< Vector > m_vNavLinkTarget; // 0x178	
	CAnimGraphParamOptionalRef< float32 > m_flEnemyDistance; // 0x190	
	CAnimGraphParamOptionalRef< float32 > m_flEnemyDirection; // 0x1a8	
	CAnimGraphParamOptionalRef< bool > m_bCanSeeEnemy; // 0x1c0	
	CAnimGraphParamOptionalRef< bool > m_bEnemyFacingMe; // 0x1d8	
	CAnimGraphParamOptionalRef< bool > m_bHitTrigger; // 0x1f0	
	CAnimGraphParamOptionalRef< Vector > m_vecHitDirection; // 0x208	
	CAnimGraphParamOptionalRef< float32 > m_flHitHeading; // 0x220	
	CAnimGraphParamOptionalRef< Vector > m_vecHitOffset; // 0x238	
	CAnimGraphParamOptionalRef< float32 > m_flHitStrength; // 0x250	
	CAnimGraphParamOptionalRef< char* > m_pszHitDamageType; // 0x268	
	CAnimGraphParamOptionalRef< char* > m_pszDeathHitLocation; // 0x288	
	CAnimGraphParamOptionalRef< int32 > m_nHitBone; // 0x2a8	
	CAnimGraphParamOptionalRef< char* > m_pszNPCState; // 0x2c0	
	CAnimGraphParamOptionalRef< bool > m_bStunned; // 0x2e0	
	CAnimGraphParamOptionalRef< bool > m_bLookTargetChargedAutoclear; // 0x2f8	
	CAnimGraphParamOptionalRef< char* > m_sBodyIdle; // 0x310	
	CAnimGraphParamOptionalRef< char* > m_sFlashlightMode; // 0x330	
	CAnimGraphParamOptionalRef< char* > m_sFacingReason; // 0x350	
	CAnimGraphTagOptionalRef m_sFacingModeUsePath; // 0x370	
	CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // 0x388	
	CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // 0x3a0	
	CAnimGraphParamOptionalRef< bool > m_bMoveSolveNudgeActive; // 0x3b8	
	CAnimGraphParamOptionalRef< float32 > m_flMoveSolveNudgeYaw; // 0x3d0	
	CAnimGraphParamOptionalRef< char* > m_pszDoorOpenAction; // 0x3e8	
	CAnimGraphParamOptionalRef< float32 > m_flDistanceToDoor; // 0x408	
	CAnimGraphParamOptionalRef< bool > m_bDoorLeft; // 0x420	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPCGraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPCGraphController")->m_static_fields[1]->m_instance);};
};

