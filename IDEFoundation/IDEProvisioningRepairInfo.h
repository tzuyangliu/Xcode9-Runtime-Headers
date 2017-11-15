//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDERepairable-Protocol.h>

@class DVTAppIDFeatures, DVTPlatform, DVTPortalProfileType, DVTSigningCertificate, NSArray, NSDictionary, NSError, NSString;
@protocol IDEProvisioningBasicProfile, IDEProvisioningBasicTeam;

@interface IDEProvisioningRepairInfo : NSObject <IDERepairable>
{
    BOOL _preferExplicitAppID;
    NSString *_repairableName;
    id <IDEProvisioningBasicTeam> _team;
    NSArray *_certificateTypes;
    NSArray *_devices;
    NSArray *_instigatingErrors;
    long long _provisioningStyle;
    id <IDEProvisioningBasicProfile> _profile;
    DVTPlatform *_platform;
    NSDictionary *_entitlements;
    NSString *_machineName;
    NSString *_machineID;
    NSString *_bundleID;
    DVTPortalProfileType *_profileType;
    DVTAppIDFeatures *_appIDFeatures;
    DVTSigningCertificate *_signingCertificate;
    NSError *_signingCertificateError;
}

+ (id)repairInfoWithProvisioningInputs:(id)arg1 instigatingErrors:(id)arg2;
+ (id)repairInfoWithRepairableName:(id)arg1 team:(id)arg2 provisioningStyle:(long long)arg3 certificateTypes:(id)arg4 devices:(id)arg5 bundleID:(id)arg6 profileType:(id)arg7 appIDFeatures:(id)arg8 platform:(id)arg9 profile:(id)arg10 signingCertificate:(id)arg11 signingCertificateError:(id)arg12 entitlements:(id)arg13 instigatingErrors:(id)arg14;
@property(readonly, nonatomic) NSError *signingCertificateError; // @synthesize signingCertificateError=_signingCertificateError;
@property(readonly, nonatomic) DVTSigningCertificate *signingCertificate; // @synthesize signingCertificate=_signingCertificate;
@property(readonly, nonatomic) DVTAppIDFeatures *appIDFeatures; // @synthesize appIDFeatures=_appIDFeatures;
@property(readonly, nonatomic) DVTPortalProfileType *profileType; // @synthesize profileType=_profileType;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) BOOL preferExplicitAppID; // @synthesize preferExplicitAppID=_preferExplicitAppID;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) id <IDEProvisioningBasicProfile> profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) long long provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
@property(readonly, nonatomic) NSArray *instigatingErrors; // @synthesize instigatingErrors=_instigatingErrors;
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) NSArray *certificateTypes; // @synthesize certificateTypes=_certificateTypes;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(readonly, nonatomic) NSString *repairableName; // @synthesize repairableName=_repairableName;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL wantsRepairStatusSuppressed;
@property(readonly, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(readonly, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
- (id)instigatingErrorsDescription;
@property(readonly, copy) NSString *description;
- (id)profileQualificationWithProfile:(id)arg1;
- (BOOL)profileCharacteristicsWithContext:(id)arg1 profileCharacteristics:(id *)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

