#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
class CGameMoney : public CRulePointEntity
{
public:
	CEntityIOOutput m_OnMoneySpent; // 0x760	
	CEntityIOOutput m_OnMoneySpentFail; // 0x788	
	int32_t m_nMoney; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07b4[0x4]; // 0x7b4
public:
	CUtlString m_strAwardText; // 0x7b8	
	
	// Datamap fields:
	// int32_t InputSetMoneyAmount; // 0x0
	// void InputAddTeamMoneyTerrorist; // 0x0
	// void InputAddTeamMoneyCT; // 0x0
	// void InputAddMoneyPlayer; // 0x0
	// void InputSpendMoneyFromPlayer; // 0x0
};

