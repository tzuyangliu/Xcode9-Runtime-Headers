//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class DVTObservingToken, IDEDebugSession, IDELaunchSession;

@interface IDEDebugGaugeReportDocument : IDEEditorDocument
{
    IDELaunchSession *_launchSession;
    DVTObservingToken *_launchSessionObservingToken;
    IDEDebugSession *_debugSession;
}

+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
- (void).cxx_destruct;
- (id)launchSession;
- (int)readOnlyStatus;
- (void)editorDocumentWillClose;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

