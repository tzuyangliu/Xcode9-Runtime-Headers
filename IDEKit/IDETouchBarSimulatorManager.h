//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDETouchBarSimulatorHostWindowControllerDelegate-Protocol.h>

@class IDETouchBarSimulatorHostWindowController, IDETouchBarSimulatorWorkspaceTracker, NSMapTable, NSMenuItem, NSString;

@interface IDETouchBarSimulatorManager : NSObject <IDETouchBarSimulatorHostWindowControllerDelegate>
{
    BOOL _autoShowEnabled;
    BOOL _simulatorEnabled;
    IDETouchBarSimulatorHostWindowController *_simulatorHostWindowController;
    NSMenuItem *_autoShowMenuItem;
    NSMenuItem *_simulatorMenuItem;
    IDETouchBarSimulatorWorkspaceTracker *_workspaceTracker;
    NSMapTable *_workspaceExecutions;
}

+ (BOOL)isAutoShowHideFeatureEnabled;
+ (void)installMenuItem;
+ (BOOL)isHardwareAvailable;
+ (BOOL)isSupportedByOS;
+ (BOOL)isSimulatorAvailable;
@property(retain) NSMapTable *workspaceExecutions; // @synthesize workspaceExecutions=_workspaceExecutions;
@property(retain) IDETouchBarSimulatorWorkspaceTracker *workspaceTracker; // @synthesize workspaceTracker=_workspaceTracker;
@property(retain) NSMenuItem *simulatorMenuItem; // @synthesize simulatorMenuItem=_simulatorMenuItem;
@property(retain) NSMenuItem *autoShowMenuItem; // @synthesize autoShowMenuItem=_autoShowMenuItem;
@property(retain) IDETouchBarSimulatorHostWindowController *simulatorHostWindowController; // @synthesize simulatorHostWindowController=_simulatorHostWindowController;
@property(nonatomic) BOOL simulatorEnabled; // @synthesize simulatorEnabled=_simulatorEnabled;
@property(nonatomic) BOOL autoShowEnabled; // @synthesize autoShowEnabled=_autoShowEnabled;
- (void).cxx_destruct;
- (void)touchBarSimulatorHostWindowControllerWindowWillClose:(id)arg1;
- (BOOL)touchBarSimulatorHostWindowControllerWindowShouldClose:(id)arg1;
- (void)handleTouchBarSimulatorDisableServiceNotification:(id)arg1;
- (void)handleTouchBarSimulatorEnableServiceNotification:(id)arg1;
- (void)handleTouchBarSimulatorCanAutoShowNotification:(id)arg1;
- (void)handleTouchBarSimulatorCanAutoHideNotification:(id)arg1;
- (void)handleTouchBarSimulatorShouldBeHiddenNotification:(id)arg1;
- (void)handleTouchBarSimulatorShouldBeVisibleIfNecessaryNotification:(id)arg1;
- (void)handleTouchBarSimulatorShouldBeVisibleNotification:(id)arg1;
- (void)stopObservingNotifications;
- (void)startObservingNotifications;
- (void)saveSimulatorWindowVisibilityState:(BOOL)arg1;
- (void)saveSimulatorAutoShowState;
- (void)restoreState;
- (void)_updateActiveExecutionsCount:(long long)arg1 forWorkspace:(id)arg2;
- (void)stopTrackingWorkspaceExecutionLifetimes;
- (void)startTrackingWorkspaceExecutionLifetimes;
- (void)autoShowMenuItemNeedsUpdate;
- (void)_toggleAutoShowEnabledState;
- (void)toggleSimulatorAutoShow:(id)arg1;
- (void)closeSimulatorWindow;
- (void)openSimulatorWindow;
- (id)_currentSimulatorHostWindowController;
- (BOOL)isSimulatorWindowVisible;
- (void)updateMenuItemForSimulatorVisibility:(BOOL)arg1;
- (void)setSimulatorWindowVisibility:(BOOL)arg1;
- (void)userRequestSimulatorVisibility:(BOOL)arg1;
- (void)toggleSimulatorWindowVisibility:(id)arg1;
- (void)installMenuItems;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

