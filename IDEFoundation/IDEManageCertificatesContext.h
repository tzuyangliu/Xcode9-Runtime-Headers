//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount, DVTDeveloperAccountManager, DVTPortalTeam, DVTSigningCertificateManager, IDEProvisioningPortal, IDEProvisioningTeamManager, NSSet;
@protocol IDEProvisioningBasicTeam, IDEProvisioningTeamAccountPairProvider;

@interface IDEManageCertificatesContext : NSObject
{
    id <IDEProvisioningBasicTeam> _team;
    DVTPortalTeam *_portalTeam;
    NSSet *_certificateTypes;
    DVTSigningCertificateManager *_certificateManager;
    IDEProvisioningPortal *_portal;
    id <IDEProvisioningTeamAccountPairProvider> _teamAccountPairProvider;
    IDEProvisioningTeamManager *_teamManager;
    DVTDeveloperAccountManager *_developerAccountManager;
    DVTDeveloperAccount *_developerAccount;
}

@property(retain, nonatomic) DVTDeveloperAccount *developerAccount; // @synthesize developerAccount=_developerAccount;
@property(retain, nonatomic) DVTDeveloperAccountManager *developerAccountManager; // @synthesize developerAccountManager=_developerAccountManager;
@property(retain, nonatomic) IDEProvisioningTeamManager *teamManager; // @synthesize teamManager=_teamManager;
@property(retain, nonatomic) id <IDEProvisioningTeamAccountPairProvider> teamAccountPairProvider; // @synthesize teamAccountPairProvider=_teamAccountPairProvider;
@property(retain, nonatomic) IDEProvisioningPortal *portal; // @synthesize portal=_portal;
@property(retain, nonatomic) DVTSigningCertificateManager *certificateManager; // @synthesize certificateManager=_certificateManager;
@property(retain, nonatomic) NSSet *certificateTypes; // @synthesize certificateTypes=_certificateTypes;
@property(readonly, nonatomic) DVTPortalTeam *portalTeam; // @synthesize portalTeam=_portalTeam;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
- (void).cxx_destruct;
- (id)sessionWithError:(id *)arg1;
- (id)developerAccountWithError:(id *)arg1;
- (id)initWithTeam:(id)arg1;

@end
