//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

#import <IDEFoundation/IDEExecutingOperationTrackable-Protocol.h>

@class DVTDisallowFinishToken, DVTDispatchLock, IDELaunchSession, IDERunOperationWorker, NSMutableArray, NSString;

@interface IDERunOperation : DVTOperation <IDEExecutingOperationTrackable>
{
    DVTDispatchLock *_workerAndFinishedTokenLock;
    NSMutableArray *_trackerObserverTokens;
    DVTDisallowFinishToken *_finishToken;
    BOOL _workaroundIsCancelled;
    IDERunOperationWorker *_worker;
    NSMutableArray *_trackers;
}

+ (id)keyPathsForValuesAffectingLaunchSession;
+ (id)keyPathsForValuesAffectingIsCancelled;
@property(retain) NSMutableArray *trackers; // @synthesize trackers=_trackers;
@property(retain) IDERunOperationWorker *worker; // @synthesize worker=_worker;
@property BOOL workaroundIsCancelled; // @synthesize workaroundIsCancelled=_workaroundIsCancelled;
- (void).cxx_destruct;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
- (void)registerTracker:(id)arg1;
- (void)_runningTrackerFinished:(id)arg1;
- (void)runningDidFinish;
@property(readonly) IDELaunchSession *launchSession;
- (void)cancel;
- (BOOL)isCancelled;
- (void)main;
- (id)initWithWorker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
