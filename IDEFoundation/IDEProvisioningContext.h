//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTProvisioningProfileManager, DVTSigningCertificateManager, IDEProvisioningTeamManager;
@protocol IDEProvisioningErrorProvider;

@interface IDEProvisioningContext : NSObject
{
    id <IDEProvisioningErrorProvider> _errorProvider;
    IDEProvisioningTeamManager *_teamManager;
    DVTProvisioningProfileManager *_profileManager;
    DVTSigningCertificateManager *_certificateManager;
    long long _automaticLocationStyle;
    long long _repairMode;
    long long _evaluationMode;
    long long _provisioningEnvironment;
    long long _provisioningTask;
}

+ (long long)currentEnvironment;
+ (id)newContextWithDefaultManagers;
@property(nonatomic) long long provisioningTask; // @synthesize provisioningTask=_provisioningTask;
@property(nonatomic) long long provisioningEnvironment; // @synthesize provisioningEnvironment=_provisioningEnvironment;
@property(nonatomic) long long evaluationMode; // @synthesize evaluationMode=_evaluationMode;
@property(nonatomic) long long repairMode; // @synthesize repairMode=_repairMode;
@property(nonatomic) long long automaticLocationStyle; // @synthesize automaticLocationStyle=_automaticLocationStyle;
@property(retain, nonatomic) DVTSigningCertificateManager *certificateManager; // @synthesize certificateManager=_certificateManager;
@property(retain, nonatomic) DVTProvisioningProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(retain, nonatomic) IDEProvisioningTeamManager *teamManager; // @synthesize teamManager=_teamManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <IDEProvisioningErrorProvider> errorProvider; // @synthesize errorProvider=_errorProvider;
- (id)initWithTeamManager:(id)arg1 profileManager:(id)arg2 certificateManager:(id)arg3;

@end

