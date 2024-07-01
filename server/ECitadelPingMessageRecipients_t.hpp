#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ECitadelPingMessageRecipients_t : uint32_t
{
	k_ECitadelRecipients_GlobalFriendlyTeam = 0x0,
	k_ECitadelRecipients_RecipientAndPlayer = 0x1,
	k_ECitadelRecipients_RecipientsAroundPlayer = 0x2,
	k_ECitadelRecipients_EntityResponseOnly = 0x3,
	k_ECitadelRecipients_GlobalAllChat = 0x4,
};

