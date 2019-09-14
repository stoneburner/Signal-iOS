//
//  Copyright (c) 2019 Open Whisper Systems. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

#ifndef TextSecureKit_Constants_h
#define TextSecureKit_Constants_h

typedef NS_ENUM(NSInteger, TSWhisperMessageType) {
    TSUnknownMessageType = 0,
    TSEncryptedWhisperMessageType = 1,
    TSIgnoreOnIOSWhisperMessageType = 2, // on droid this is the prekey bundle message irrelevant for us
    TSPreKeyWhisperMessageType = 3,
    TSUnencryptedWhisperMessageType = 4,
    TSUnidentifiedSenderMessageType = 6,
};

#pragma mark Server Address

#define textSecureHTTPTimeOut 10

#define kLegalTermsUrlString @"https://signal.org/legal/"

//#ifndef DEBUG

// Production
#define textSecureWebSocketAPI @"wss://textsecure-service.whispersystems.org/v1/websocket/"
#define textSecureServerURL @"https://textsecure-service.whispersystems.org/"
#define textSecureCDNServerURL @"https://cdn.signal.org"
// Use same reflector for service and CDN
#define textSecureServiceReflectorHost @"europe-west1-signal-cdn-reflector.cloudfunctions.net"
#define textSecureCDNReflectorHost @"europe-west1-signal-cdn-reflector.cloudfunctions.net"
#define contactDiscoveryURL @"https://api.directory.signal.org"
#define keyBackupURL @"https://api.backup.signal.org"
#define storageServiceURL @"https://storage.signal.org"
#define kUDTrustRoot @"BXu6QIKVz5MA8gstzfOgRQGqyLqOwNKHL6INkv3IHWMF"

#define serviceCensorshipPrefix @"service"
#define cdnCensorshipPrefix @"cdn"
#define contactDiscoveryCensorshipPrefix @"directory"
#define keyBackupCensorshipPrefix @"backup"

#define contactDiscoveryEnclaveName @"cd6cfc342937b23b1bdd3bbf9721aa5615ac9ff50a75c5527d441cd3276826c9"
#define contactDiscoveryMrEnclave contactDiscoveryEnclaveName

#define keyBackupEnclaveName @"281b2220946102e8447b1d72a02b52d413c390780bae3e3a5aad27398999e7a3"
#define keyBackupMrEnclave @"94029382f0a8947a72df682e6972f58bbb6dda2f5ec51ab0974bd40c781b719b"
#define keyBackupServiceId @"281b2220946102e8447b1d72a02b52d413c390780bae3e3a5aad27398999e7a3"

#define USING_PRODUCTION_SERVICE

//#else

//// Staging
//#define textSecureWebSocketAPI @"wss://textsecure-service-staging.whispersystems.org/v1/websocket/"
//#define textSecureServerURL @"https://textsecure-service-staging.whispersystems.org/"
//#define textSecureCDNServerURL @"https://cdn-staging.signal.org"
//#define textSecureServiceReflectorHost @"europe-west1-signal-cdn-reflector.cloudfunctions.net";
//#define textSecureCDNReflectorHost @"europe-west1-signal-cdn-reflector.cloudfunctions.net";
//#define contactDiscoveryURL @"https://api-staging.directory.signal.org"
//#define keyBackupURL @"https://api-staging.backup.signal.org"
//#define storageServiceURL @"https://storage.signal.org" // For now, staging is using the production URL
//#define kUDTrustRoot @"BbqY1DzohE4NUZoVF+L18oUPrK3kILllLEJh2UnPSsEx"
//
//#define serviceCensorshipPrefix @"service-staging"
//#define cdnCensorshipPrefix @"cdn-staging"
//#define contactDiscoveryCensorshipPrefix @"directory-staging"
//#define keyBackupCensorshipPrefix @"backup-staging"
//
//// CDS uses the same EnclaveName and MrEnclave
//#define contactDiscoveryEnclaveName @"e0f7dee77dc9d705ccc1376859811da12ecec3b6119a19dc39bdfbf97173aa18"
//#define contactDiscoveryMrEnclave contactDiscoveryEnclaveName
//
//#define keyBackupEnclaveName @"281b2220946102e8447b1d72a02b52d413c390780bae3e3a5aad27398999e7a3"
//#define keyBackupMrEnclave @"94029382f0a8947a72df682e6972f58bbb6dda2f5ec51ab0974bd40c781b719b"
//#define keyBackupServiceId @"281b2220946102e8447b1d72a02b52d413c390780bae3e3a5aad27398999e7a3"

//#endif

BOOL IsUsingProductionService(void);

#define textSecureAccountsAPI @"v1/accounts"
#define textSecureAttributesAPI @"v1/accounts/attributes/"

#define textSecureMessagesAPI @"v1/messages/"
#define textSecureKeysAPI @"v2/keys"
#define textSecureSignedKeysAPI @"v2/keys/signed"
#define textSecureDirectoryAPI @"v1/directory"
#define textSecureAttachmentsAPI @"v1/attachments"
#define textSecureDeviceProvisioningCodeAPI @"v1/devices/provisioning/code"
#define textSecureDeviceProvisioningAPIFormat @"v1/provisioning/%@"
#define textSecureDevicesAPIFormat @"v1/devices/%@"
#define textSecureProfileAPIFormat @"v1/profile/%@"
#define textSecureSetProfileNameAPIFormat @"v1/profile/name/%@"
#define textSecureProfileAvatarFormAPI @"v1/profile/form/avatar"
#define textSecure2FAAPI @"v1/accounts/pin"
#define textSecureRegistrationLockV2API @"v1/accounts/registration_lock"

#define SignalApplicationGroup @"group.technology.kasimir.shared-container"

#endif

NS_ASSUME_NONNULL_END
