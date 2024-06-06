#pragma once

#include <cstdint>

struct Extent;
struct CountdownTimer;
struct IntervalTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1390
// Has VTable
// 
// MNetworkVarNames "Vector m_firePositions"
// MNetworkVarNames "Vector m_fireParentPositions"
// MNetworkVarNames "bool m_bFireIsBurning"
// MNetworkVarNames "Vector m_BurnNormal"
// MNetworkVarNames "int m_fireCount"
// MNetworkVarNames "int m_nInfernoType"
// MNetworkVarNames "int m_nFireEffectTickBegin"
// MNetworkVarNames "float m_nFireLifetime"
// MNetworkVarNames "bool m_bInPostEffectTime"
class CInferno : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x10]; // 0x710
public:
	// MNetworkEnable
	Vector m_firePositions[64]; // 0x720	
	// MNetworkEnable
	Vector m_fireParentPositions[64]; // 0xa20	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0xd20	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0xd60	
	// MNetworkEnable
	int32_t m_fireCount; // 0x1060	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x1064	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x1068	
	// MNetworkEnable
	float m_nFireLifetime; // 0x106c	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x1070	
private:
	[[maybe_unused]] uint8_t __pad1071[0x3]; // 0x1071
public:
	int32_t m_nFiresExtinguishCount; // 0x1074	
	bool m_bWasCreatedInSmoke; // 0x1078	
private:
	[[maybe_unused]] uint8_t __pad1079[0x207]; // 0x1079
public:
	Extent m_extent; // 0x1280	
	CountdownTimer m_damageTimer; // 0x1298	
	CountdownTimer m_damageRampTimer; // 0x12b0	
	Vector m_splashVelocity; // 0x12c8	
	Vector m_InitialSplashVelocity; // 0x12d4	
	Vector m_startPos; // 0x12e0	
	Vector m_vecOriginalSpawnLocation; // 0x12ec	
	IntervalTimer m_activeTimer; // 0x12f8	
	int32_t m_fireSpawnOffset; // 0x1308	
	int32_t m_nMaxFlames; // 0x130c	
	int32_t m_nSpreadCount; // 0x1310	
private:
	[[maybe_unused]] uint8_t __pad1314[0x4]; // 0x1314
public:
	CountdownTimer m_BookkeepingTimer; // 0x1318	
	CountdownTimer m_NextSpreadTimer; // 0x1330	
	uint16_t m_nSourceItemDefIndex; // 0x1348	
	
	// Static fields:
	static float &Get_InfernoFire_Radius(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[0]->m_instance);};
	static float &Get_InfernoFire_LOSHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[1]->m_instance);};
	static float &Get_InfernoFire_CylinderHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[2]->m_instance);};
	static float &Get_InfernoFire_FullHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[3]->m_instance);};
};

