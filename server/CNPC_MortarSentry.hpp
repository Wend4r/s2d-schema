#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a8
// Has VTable
class CNPC_MortarSentry : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1550[0xc]; // 0x1550
public:
	float m_flAttackCone; // 0x155c	
	float m_flLastAlertSound; // 0x1560	
	float m_flTrackingSpeed; // 0x1564	
	Vector m_vTargetPosition; // 0x1568	
	float m_flSearchRadius; // 0x1574	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_MORTAR_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MORTAR_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MORTAR_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MORTAR_NO_TARGET_VOLLEY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[3]->m_instance);};
	
	// Datamap fields:
	// float m_flLifeTime; // 0x1578
	// void m_nCurrentVolley; // 0x1588
	// void m_nGrenadesPerVolley; // 0x158c
	// void m_flNextAttackTime; // 0x1590
	// void m_flAttackRateInnerVolley; // 0x1594
	// void m_flAttackRate; // 0x1598
	// void m_vLastTargetPos; // 0x159c
};

