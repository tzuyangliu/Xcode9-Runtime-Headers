//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IDEConsoleAdaptor, NSError;

@protocol IDELaunchSessionEventSourceEvents
- (void)launchSessionExpired;
- (void)launchSessionGotPID:(int)arg1;
- (void)launchSessionExitedWithCode:(int)arg1 hasCrashed:(BOOL)arg2;
- (void)launchSessionEncounteredAlertError:(NSError *)arg1;
- (void)launchSessionAddedConsoleAdaptor:(IDEConsoleAdaptor *)arg1;
- (void)launchSessionCompletedInitialIntensiveFileIO;
- (void)launchSessionStarted;
@end

