#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa40
// Has VTable
class C_GlobalLight : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x4c8]; // 0x548
public:
	uint16_t m_WindClothForceHandle; // 0xa10	
	
	// Static fields:
	static C_GlobalLight* &Get_sm_pGlobalLight(){return *reinterpret_cast<C_GlobalLight**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[0]->m_instance);};
	static CUtlStringToken &Get_sm_pSkyboxSlots(){return *reinterpret_cast<CUtlStringToken*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[1]->m_instance);};
	static CUtlVector< C_GlobalLight* > &Get_sm_nonPrimaryGlobalLights(){return *reinterpret_cast<CUtlVector< C_GlobalLight* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[2]->m_instance);};
	
	// Datamap fields:
	// CGlobalLightBase CGlobalLightBase; // 0x550
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputSetLightScale; // 0x0
};

