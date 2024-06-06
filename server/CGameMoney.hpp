#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
class CGameMoney : public CRulePointEntity
{
public:
	CEntityIOOutput m_OnMoneySpent; // 0x720	
	CEntityIOOutput m_OnMoneySpentFail; // 0x748	
	int32_t m_nMoney; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0774[0x4]; // 0x774
public:
	CUtlString m_strAwardText; // 0x778	
	
	// Datamap fields:
	// int32_t InputSetMoneyAmount; // 0x0
	// void InputAddTeamMoneyTerrorist; // 0x0
	// void InputAddTeamMoneyCT; // 0x0
	// void InputAddMoneyPlayer; // 0x0
	// void InputSpendMoneyFromPlayer; // 0x0
};

