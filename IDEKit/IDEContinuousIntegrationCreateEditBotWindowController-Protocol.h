//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEWorkspaceTabController, NSWindow;

@protocol IDEContinuousIntegrationCreateEditBotWindowController <NSObject>
- (void)beginSessionModalForWorkspaceTabController:(IDEWorkspaceTabController *)arg1 redefineBot:(id)arg2 hostWindow:(NSWindow *)arg3 withCompletionBlock:(void (^)(int, id, NSError *))arg4;
- (void)beginSessionModalForWorkspaceTabController:(IDEWorkspaceTabController *)arg1 hostWindow:(NSWindow *)arg2 withCompletionBlock:(void (^)(int, id, NSError *))arg3;
@end

