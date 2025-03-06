#pragma once

#include <cstdint>

struct PingWheelOptionID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// 
// MVDataRoot
// MGetKV3ClassDefaults
struct PingWheelMessage_t
{
public:
	// MPropertySuppressField
	CUtlVector< PingWheelOptionID_t > m_vecSubnavMessageIDs; // 0x0	
	// MPropertyDescription "unique integer ID of this ping wheel message"
	// MVDataUniqueMonotonicInt "_editor/next_ping_wheel_id"
	// MPropertyAttributeEditor "locked_int()"
	// MPropertySuppressField
	PingWheelOptionID_t m_unPingWheelOptionID; // 0x18	
	// MPropertyDescription "Concept for your ping message. These are populated in citadel_ping_wheel_data.h"
	CitadelPingWheelConcept_t m_ePingConcept; // 0x1c	
	// MPropertySuppressExpr "m_bIsSubnavMessage == true"
	// MPropertyDescription "How do you want the ping to behave?"
	ChatMsgPingMarkerInfo m_ePingMarkerInfo; // 0x20	
	// MPropertySuppressExpr "m_bIsSubnavMessage == true"
	// MPropertyDescription "Which recipients do you want this ping message sent to?"
	ECitadelPingMessageRecipients_t m_eRecipientsType; // 0x24	
	// MPropertySuppressExpr "m_ePingConcept != CITADEL_PING_HEADING_TO_LANE && m_ePingConcept != CITADEL_PING_PUSH_LANE && m_ePingConcept != CITADEL_PING_DEFEND_LANE"
	// MPropertyDescription "Lane Color for certain pings that require a line color."
	CMsgLaneColor m_eLaneColor; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyDescription "This is the Loc String that displays as a Ping Wheel Option."
	CUtlString m_strLabelToken; // 0x30	
	// MPropertyDescription "This is the Loc String that shows in the chat area when you use this Ping Option."
	CUtlString m_strMessageToken; // 0x38	
	// MPropertySuppressExpr "m_bIsSubnavMessage == true"
	// MPropertyDescription "Sound that Plays when you use this Ping Option"
	CUtlString m_strSound; // 0x40	
	// MPropertySuppressExpr "m_bIsSubnavMessage == true"
	// MPropertyDescription "Icon that displays on the Ping Wheel"
	CUtlString m_strIcon; // 0x48	
	// MPropertySuppressExpr "m_bIsSubnavMessage == true"
	// MPropertyDescription "What type of sound should this Ping Option play when used?"
	ECitadelPingWheelSound_t m_ePingWheelSoundType; // 0x50	
	// MPropertyDescription "Is this a subnav of another message? i.e. Heading to Yellow is a subnav of Heading to Lane..."
	bool m_bIsSubnavMessage; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	// MPropertyDescription "The Default value 30 is usually good but if the text on the Ping Wheel isn't centered vertically, you should adjust this value."
	float m_flPhraseTopMarginOffset; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	// MPropertySuppressExpr "m_bIsSubnavMessage == true || m_eSliceType == CITADEL_PING_WHEEL_ONE_SLICE || m_eSliceType == CITADEL_PING_WHEEL_TWO_SLICE"
	// MPropertyCustomFGDType "vdata_choice:scripts/ping_wheel_messages.vdata"
	// MPropertyDescription "Is this a parent message that has subnav messages? i.e. Heading to Lane has subnav messages Heading to Yellow, Heading to Blue, etc."
	CUtlVector< CUtlString > m_vecSubnavMessageNames; // 0x60	
	// MPropertySuppressExpr "m_bIsSubnavMessage == true"
	// MPropertyDescription "Is this message a response to other concepts? i.e. Yes, No, and On My Way are all responses to other messages. This message will appear in the Contextual Ping Wheel Slot if one of these concepts is used by another player."
	CUtlVector< CitadelPingWheelConcept_t > m_vecRespondsToConcepts; // 0x78	
	// MPropertyDescription "Should this message be bindable via Keybinds?"
	bool m_bBindable; // 0x90	
	// MPropertyDescription "Should this message be bindable on the Ping Wheel?"
	bool m_bPingWheelBindable; // 0x91	
};

