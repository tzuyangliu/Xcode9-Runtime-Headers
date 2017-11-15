//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEGeniusResultsFinder.h>

@class DVTDispatchLock, DVTNotificationToken;

@interface IDEIndexGeniusResultsFinder : IDEGeniusResultsFinder
{
    DVTNotificationToken *_indexDidChangeNotificationObserver;
    DVTDispatchLock *_generationLock;
    unsigned long long _currentGeneration;
}

- (void).cxx_destruct;
- (void)_updateGeniusResults;
- (BOOL)_getUpdateGeniusResultsPhaseOneBlock:(CDUnknownBlockType *)arg1 phaseTwoBlock:(CDUnknownBlockType *)arg2 phaseThreeBlock:(CDUnknownBlockType *)arg3;
- (void)setIdle:(BOOL)arg1;
- (void)primitiveInvalidate;
- (id)_initWithWorkspaceTabController:(id)arg1 navigableItemCoordinator:(id)arg2;

@end

