//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlOperationInfo.h>

@class DVTFilePath, NSString, NSURL;

@interface IDESourceControlCreateGitRepositoryOperationInfo : IDESourceControlOperationInfo
{
    BOOL _shouldPush;
    DVTFilePath *_repositoryRoot;
    NSString *_localRemoteName;
    NSURL *_existingRemoteURL;
}

@property(copy) NSURL *existingRemoteURL; // @synthesize existingRemoteURL=_existingRemoteURL;
@property(copy) NSString *localRemoteName; // @synthesize localRemoteName=_localRemoteName;
@property BOOL shouldPush; // @synthesize shouldPush=_shouldPush;
@property(retain) DVTFilePath *repositoryRoot; // @synthesize repositoryRoot=_repositoryRoot;
- (void).cxx_destruct;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

