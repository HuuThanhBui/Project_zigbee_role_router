// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// This file contains the tokens for attributes stored in flash


// Identifier tags for tokens
// Creator for attribute: on/off, endpoint: 1
#define CREATOR_ON_OFF_1 0xB000
#define NVM3KEY_ON_OFF_1 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB000 )
// Creator for attribute: start up on off, endpoint: 1
#define CREATOR_START_UP_ON_OFF_1 0xB001
#define NVM3KEY_START_UP_ON_OFF_1 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB001 )
// Creator for attribute: on/off, endpoint: 2
#define CREATOR_ON_OFF_2 0xB002
#define NVM3KEY_ON_OFF_2 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB002 )
// Creator for attribute: start up on off, endpoint: 2
#define CREATOR_START_UP_ON_OFF_2 0xB003
#define NVM3KEY_START_UP_ON_OFF_2 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB003 )
// Creator for attribute: on/off, endpoint: 3
#define CREATOR_ON_OFF_3 0xB004
#define NVM3KEY_ON_OFF_3 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB004 )
// Creator for attribute: start up on off, endpoint: 3
#define CREATOR_START_UP_ON_OFF_3 0xB005
#define NVM3KEY_START_UP_ON_OFF_3 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB005 )
// Creator for attribute: on/off, endpoint: 4
#define CREATOR_ON_OFF_4 0xB006
#define NVM3KEY_ON_OFF_4 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB006 )
// Creator for attribute: start up on off, endpoint: 4
#define CREATOR_START_UP_ON_OFF_4 0xB007
#define NVM3KEY_START_UP_ON_OFF_4 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB007 )
// Creator for attribute: on/off, endpoint: 5
#define CREATOR_ON_OFF_5 0xB008
#define NVM3KEY_ON_OFF_5 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB008 )
// Creator for attribute: start up on off, endpoint: 5
#define CREATOR_START_UP_ON_OFF_5 0xB009
#define NVM3KEY_START_UP_ON_OFF_5 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB009 )
// Creator for attribute: on/off, endpoint: 6
#define CREATOR_ON_OFF_6 0xB00A
#define NVM3KEY_ON_OFF_6 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB00A )
// Creator for attribute: start up on off, endpoint: 6
#define CREATOR_START_UP_ON_OFF_6 0xB00B
#define NVM3KEY_START_UP_ON_OFF_6 ( NVM3KEY_DOMAIN_ZIGBEE | 0xB00B )


// Types for the tokens
#ifdef DEFINETYPES
typedef uint8_t  tokType_on_off;
typedef uint8_t  tokType_start_up_on_off;
typedef uint8_t  tokType_current_level;
typedef uint8_t  tokType_start_up_current_level;
typedef uint16_t  tokType_start_up_color_temperature_mireds;
#endif // DEFINETYPES


// Actual token definitions
#ifdef DEFINETOKENS
DEFINE_BASIC_TOKEN(ON_OFF_1, tokType_on_off, 0x00)
DEFINE_BASIC_TOKEN(START_UP_ON_OFF_1, tokType_start_up_on_off, 0xFF)
DEFINE_BASIC_TOKEN(ON_OFF_2, tokType_on_off, 0x00)
DEFINE_BASIC_TOKEN(START_UP_ON_OFF_2, tokType_start_up_on_off, 0xFF)
DEFINE_BASIC_TOKEN(ON_OFF_3, tokType_on_off, 0x00)
DEFINE_BASIC_TOKEN(START_UP_ON_OFF_3, tokType_start_up_on_off, 0xFF)
DEFINE_BASIC_TOKEN(ON_OFF_4, tokType_on_off, 0x00)
DEFINE_BASIC_TOKEN(START_UP_ON_OFF_4, tokType_start_up_on_off, 0xFF)
DEFINE_BASIC_TOKEN(ON_OFF_5, tokType_on_off, 0x00)
DEFINE_BASIC_TOKEN(START_UP_ON_OFF_5, tokType_start_up_on_off, 0xFF)
DEFINE_BASIC_TOKEN(ON_OFF_6, tokType_on_off, 0x00)
DEFINE_BASIC_TOKEN(START_UP_ON_OFF_6, tokType_start_up_on_off, 0xFF)
#endif // DEFINETOKENS


// Macro snippet that loads all the attributes from tokens
#define GENERATED_TOKEN_LOADER(endpoint) do {\
  uint8_t ptr[1]; \
  uint8_t curNetwork = emberGetCurrentNetwork(); \
  uint8_t epNetwork; \
  epNetwork = emberAfNetworkIndexFromEndpoint(1); \
  if((endpoint) == 1 || ((endpoint) == EMBER_BROADCAST_ENDPOINT && epNetwork == curNetwork)) { \
    halCommonGetToken((tokType_on_off *)ptr, TOKEN_ON_OFF_1); \
    emberAfWriteServerAttribute(1, ZCL_ON_OFF_CLUSTER_ID, ZCL_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_BOOLEAN_ATTRIBUTE_TYPE); \
    halCommonGetToken((tokType_start_up_on_off *)ptr, TOKEN_START_UP_ON_OFF_1); \
    emberAfWriteServerAttribute(1, ZCL_ON_OFF_CLUSTER_ID, ZCL_START_UP_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_ENUM8_ATTRIBUTE_TYPE); \
  } \
  epNetwork = emberAfNetworkIndexFromEndpoint(2); \
  if((endpoint) == 2 || ((endpoint) == EMBER_BROADCAST_ENDPOINT && epNetwork == curNetwork)) { \
    halCommonGetToken((tokType_on_off *)ptr, TOKEN_ON_OFF_2); \
    emberAfWriteServerAttribute(2, ZCL_ON_OFF_CLUSTER_ID, ZCL_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_BOOLEAN_ATTRIBUTE_TYPE); \
    halCommonGetToken((tokType_start_up_on_off *)ptr, TOKEN_START_UP_ON_OFF_2); \
    emberAfWriteServerAttribute(2, ZCL_ON_OFF_CLUSTER_ID, ZCL_START_UP_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_ENUM8_ATTRIBUTE_TYPE); \
  } \
  epNetwork = emberAfNetworkIndexFromEndpoint(3); \
  if((endpoint) == 3 || ((endpoint) == EMBER_BROADCAST_ENDPOINT && epNetwork == curNetwork)) { \
    halCommonGetToken((tokType_on_off *)ptr, TOKEN_ON_OFF_3); \
    emberAfWriteServerAttribute(3, ZCL_ON_OFF_CLUSTER_ID, ZCL_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_BOOLEAN_ATTRIBUTE_TYPE); \
    halCommonGetToken((tokType_start_up_on_off *)ptr, TOKEN_START_UP_ON_OFF_3); \
    emberAfWriteServerAttribute(3, ZCL_ON_OFF_CLUSTER_ID, ZCL_START_UP_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_ENUM8_ATTRIBUTE_TYPE); \
  } \
  epNetwork = emberAfNetworkIndexFromEndpoint(4); \
  if((endpoint) == 4 || ((endpoint) == EMBER_BROADCAST_ENDPOINT && epNetwork == curNetwork)) { \
    halCommonGetToken((tokType_on_off *)ptr, TOKEN_ON_OFF_4); \
    emberAfWriteServerAttribute(4, ZCL_ON_OFF_CLUSTER_ID, ZCL_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_BOOLEAN_ATTRIBUTE_TYPE); \
    halCommonGetToken((tokType_start_up_on_off *)ptr, TOKEN_START_UP_ON_OFF_4); \
    emberAfWriteServerAttribute(4, ZCL_ON_OFF_CLUSTER_ID, ZCL_START_UP_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_ENUM8_ATTRIBUTE_TYPE); \
  } \
  epNetwork = emberAfNetworkIndexFromEndpoint(5); \
  if((endpoint) == 5 || ((endpoint) == EMBER_BROADCAST_ENDPOINT && epNetwork == curNetwork)) { \
    halCommonGetToken((tokType_on_off *)ptr, TOKEN_ON_OFF_5); \
    emberAfWriteServerAttribute(5, ZCL_ON_OFF_CLUSTER_ID, ZCL_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_BOOLEAN_ATTRIBUTE_TYPE); \
    halCommonGetToken((tokType_start_up_on_off *)ptr, TOKEN_START_UP_ON_OFF_5); \
    emberAfWriteServerAttribute(5, ZCL_ON_OFF_CLUSTER_ID, ZCL_START_UP_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_ENUM8_ATTRIBUTE_TYPE); \
  } \
  epNetwork = emberAfNetworkIndexFromEndpoint(6); \
  if((endpoint) == 6 || ((endpoint) == EMBER_BROADCAST_ENDPOINT && epNetwork == curNetwork)) { \
    halCommonGetToken((tokType_on_off *)ptr, TOKEN_ON_OFF_6); \
    emberAfWriteServerAttribute(6, ZCL_ON_OFF_CLUSTER_ID, ZCL_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_BOOLEAN_ATTRIBUTE_TYPE); \
    halCommonGetToken((tokType_start_up_on_off *)ptr, TOKEN_START_UP_ON_OFF_6); \
    emberAfWriteServerAttribute(6, ZCL_ON_OFF_CLUSTER_ID, ZCL_START_UP_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_ENUM8_ATTRIBUTE_TYPE); \
  } \
} while(false)


// Macro snippet that saves the attribute to token
#define GENERATED_TOKEN_SAVER do {\
  uint8_t allZeroData[1]; \
  MEMSET(allZeroData, 0, 1); \
  if ( data == NULL ) data = allZeroData; \
  if ( endpoint == 1 ) { \
    if ( clusterId == 0x06 ) { \
      if ( metadata->attributeId == 0x0000 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_ON_OFF_1, data); \
      if ( metadata->attributeId == 0x4003 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_START_UP_ON_OFF_1, data); \
    } \
  } else if ( endpoint == 2) { \
    if ( clusterId == 0x06 ) { \
      if ( metadata->attributeId == 0x0000 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_ON_OFF_2, data); \
      if ( metadata->attributeId == 0x4003 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_START_UP_ON_OFF_2, data); \
    } \
  } else if ( endpoint == 3) { \
    if ( clusterId == 0x06 ) { \
      if ( metadata->attributeId == 0x0000 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_ON_OFF_3, data); \
      if ( metadata->attributeId == 0x4003 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_START_UP_ON_OFF_3, data); \
    } \
  } else if ( endpoint == 4) { \
    if ( clusterId == 0x06 ) { \
      if ( metadata->attributeId == 0x0000 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_ON_OFF_4, data); \
      if ( metadata->attributeId == 0x4003 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_START_UP_ON_OFF_4, data); \
    } \
  } else if ( endpoint == 5) { \
    if ( clusterId == 0x06 ) { \
      if ( metadata->attributeId == 0x0000 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_ON_OFF_5, data); \
      if ( metadata->attributeId == 0x4003 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_START_UP_ON_OFF_5, data); \
    } \
  } else if ( endpoint == 6) { \
    if ( clusterId == 0x06 ) { \
      if ( metadata->attributeId == 0x0000 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_ON_OFF_6, data); \
      if ( metadata->attributeId == 0x4003 && 0x0000 == emberAfGetMfgCode(metadata) &&!emberAfAttributeIsClient(metadata) ) \
        halCommonSetToken(TOKEN_START_UP_ON_OFF_6, data); \
    } \
  } \
} while(false)


