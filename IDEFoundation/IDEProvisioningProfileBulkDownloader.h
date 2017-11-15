//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, DVTProvisioningProfileManager, IDEProvisioningSessionManager, NSOperationQueue;
@protocol IDEProvisioningProfileDownloaderPortal;

@interface IDEProvisioningProfileBulkDownloader : NSObject
{
    BOOL _busy;
    double _progress;
    NSOperationQueue *_serialQueue;
    NSOperationQueue *_workQueue;
    IDEProvisioningSessionManager *_sessionManager;
    DVTProvisioningProfileManager *_profileManager;
    id <IDEProvisioningProfileDownloaderPortal> _portal;
    DVTLogAspect *_logAspect;
}

+ (id)defaultDownloader;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(retain, nonatomic) id <IDEProvisioningProfileDownloaderPortal> portal; // @synthesize portal=_portal;
@property(retain, nonatomic) DVTProvisioningProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(retain, nonatomic) IDEProvisioningSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSOperationQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isBusy) BOOL busy; // @synthesize busy=_busy;
- (void).cxx_destruct;
- (void)downloadProfilesForTeam:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)serialBackgroundDownloadProfilesForTeam:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)eligiblePlatformsForTeam:(id)arg1;
- (id)downloadPortalProfiles:(id)arg1 localProfileUUIDs:(id)arg2 session:(id)arg3 errors:(id *)arg4;
- (void)installDownloadedPortalProfiles:(id)arg1 errors:(id *)arg2;
- (id)fetchProvisioningProfiles;
- (void)waitForAreProfilesLoaded;
- (id)portalProfilesForTeam:(id)arg1 session:(id)arg2 platform:(id)arg3 error:(id *)arg4;
- (id)manualProfiles:(id)arg1;
- (id)initWithSessionManager:(id)arg1 profileManager:(id)arg2 portal:(id)arg3;

@end

