//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEOpenRequest-Protocol.h>

@class IDEEditorContext, IDEEditorOpenSpecifier, IDEWorkspaceTabController, NSString;

@interface _IDEOpenRequest : NSObject <IDEOpenRequest>
{
    IDEEditorOpenSpecifier *_openSpecifier;
    IDEWorkspaceTabController *_workspaceTabController;
    IDEEditorContext *_editorContext;
    IDEEditorContext *_explicitEditorContext;
    int _eventBehavior;
    int _takeFocus;
    CDUnknownBlockType _completionBlock;
    int _requestState;
}

@property int requestState; // @synthesize requestState=_requestState;
- (void).cxx_destruct;
- (void)cancel;
- (void)_enqueueForEventBehavior:(int)arg1;
- (void)_primitiveRunIfNecessary;
- (void)_runIfNecessary;
- (id)initWithOpenSpecifier:(id)arg1 explicitEditorContext:(id)arg2;
- (id)initWithOpenSpecifier:(id)arg1 workspaceTabController:(id)arg2 editorContext:(id)arg3 eventBehavior:(int)arg4 takeFocus:(int)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithIgnore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

