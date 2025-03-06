#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ECitadelPingMessageRecipients_t : uint32_t
{
	// MPropertyFriendlyName "Global Sound - Allied Players"
	k_ECitadelRecipients_GlobalFriendlyTeam = 0x0,
	// MPropertyFriendlyName "Ping Target and Pinging Player only"
	k_ECitadelRecipients_RecipientAndPlayer = 0x1,
	// MPropertyFriendlyName "Allied Players around Pinging Player"
	k_ECitadelRecipients_RecipientsAroundPlayer = 0x2,
	// MPropertyFriendlyName "Global Sound - Allied and Enemy Players"
	k_ECitadelRecipients_GlobalAllChat = 0x3,
};

