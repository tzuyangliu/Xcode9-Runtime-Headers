//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEPlaygroundPageCreationHandler-Protocol.h>

@class IDEPlayground, IDEPlaygroundCommon, IDEPlaygroundSharedContext, IDEWorkspaceTabController;

@interface IDEPlaygroundCreationHelper : NSObject <IDEPlaygroundPageCreationHandler>
{
    IDEPlaygroundSharedContext *_playgroundContext;
    IDEPlayground *_playground;
    IDEPlaygroundCommon *_targetItem;
    IDEWorkspaceTabController *_workspaceTabController;
    long long _pageType;
    CDUnknownBlockType _pageCreationCompletionBlock;
}

+ (void)createNewPlaygroundPageWithType:(long long)arg1 inPlayground:(id)arg2 near:(id)arg3 inWorkspaceTabController:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)_createNewPlaygroundPageWithType:(long long)arg1 inPlayground:(id)arg2 near:(id)arg3 inWorkspaceTabController:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (unsigned long long)_indexToInsertNewPageInPlayground:(id)arg1 near:(id)arg2;
+ (void)_performHoldingLock:(id)arg1 errors:(id)arg2 operation:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType pageCreationCompletionBlock; // @synthesize pageCreationCompletionBlock=_pageCreationCompletionBlock;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain, nonatomic) IDEPlaygroundCommon *targetItem; // @synthesize targetItem=_targetItem;
@property(retain, nonatomic) IDEPlayground *playground; // @synthesize playground=_playground;
@property(retain, nonatomic) IDEPlaygroundSharedContext *playgroundContext; // @synthesize playgroundContext=_playgroundContext;
- (void).cxx_destruct;
- (void)abortPageCreationWithError:(id)arg1;
- (void)performPageCreation;

@end

