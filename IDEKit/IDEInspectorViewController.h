//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEBindableDeclarativeInspectorController-Protocol.h>
#import <IDEKit/NSUserInterfaceValidations-Protocol.h>

@class DVTDelayedInvocation, IDEInspectorCategoryController, IDEInspectorContentView, IDEUtilityArea, IDEUtilitySlice, NSArray, NSArrayController, NSBundle, NSDictionary, NSMapTable, NSMutableDictionary, NSString, NSView;
@protocol DVTIssueDisplayingView, IDEInspectorContentController;

@interface IDEInspectorViewController : IDEViewController <NSUserInterfaceValidations, IDEBindableDeclarativeInspectorController>
{
    NSArrayController *_inspectedDocumentsController;
    NSArrayController *_inspectedObjectsController;
    NSMapTable *_documentObservations;
    NSArray *_content;
    IDEUtilityArea *_utilityArea;
    IDEUtilitySlice *_utilitySlice;
    NSArray *_inspectedDocuments;
    NSDictionary *_issueInfoDictionary;
    NSView<DVTIssueDisplayingView> *_issueDisplayingView;
    id _selectionProxy;
    id _selectedDocumentsProxy;
    NSMutableDictionary *_keyPathTriggeringReloadObservers;
    DVTDelayedInvocation *_reloadInspectorDelayedInvocation;
    IDEInspectorContentView *_generatedContentView;
    IDEInspectorCategoryController *_categoryController;
}

+ (BOOL)canInspectFileReferenceNavigableItems:(id)arg1;
+ (id)inspectorConfiguredDisclosureView;
+ (id)keyPathsForValuesAffectingInspectedObject;
+ (id)keyPathsForValuesAffectingInspectedObjects;
+ (id)inspectedArrayControllerKeys;
@property(retain, nonatomic) IDEInspectorCategoryController *categoryController; // @synthesize categoryController=_categoryController;
@property(retain, nonatomic) IDEInspectorContentView *generatedContentView; // @synthesize generatedContentView=_generatedContentView;
@property(retain, nonatomic) DVTDelayedInvocation *reloadInspectorDelayedInvocation; // @synthesize reloadInspectorDelayedInvocation=_reloadInspectorDelayedInvocation;
@property(retain, nonatomic) NSMutableDictionary *keyPathTriggeringReloadObservers; // @synthesize keyPathTriggeringReloadObservers=_keyPathTriggeringReloadObservers;
@property(retain, nonatomic) id selectedDocumentsProxy; // @synthesize selectedDocumentsProxy=_selectedDocumentsProxy;
@property(retain, nonatomic) id selectionProxy; // @synthesize selectionProxy=_selectionProxy;
@property(retain, nonatomic) NSView<DVTIssueDisplayingView> *issueDisplayingView; // @synthesize issueDisplayingView=_issueDisplayingView;
@property(copy, nonatomic) NSDictionary *issueInfoDictionary; // @synthesize issueInfoDictionary=_issueInfoDictionary;
@property(readonly) NSArray *inspectedDocuments; // @synthesize inspectedDocuments=_inspectedDocuments;
@property(retain, nonatomic) IDEUtilitySlice *utilitySlice; // @synthesize utilitySlice=_utilitySlice;
@property(retain, nonatomic) IDEUtilityArea *utilityArea; // @synthesize utilityArea=_utilityArea;
@property(copy, nonatomic) NSArray *content; // @synthesize content=_content;
@property(readonly) id <IDEInspectorContentController> inspectedDocumentsController; // @synthesize inspectedDocumentsController=_inspectedDocumentsController;
@property(readonly) id <IDEInspectorContentController> inspectedObjectsController; // @synthesize inspectedObjectsController=_inspectedObjectsController;
- (void).cxx_destruct;
@property(readonly) BOOL availableForAllVersionsOfMacOSX;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)undoManager;
- (BOOL)supportsDocumentUndo;
- (id)findIndicatorContentViewForInspectedKeyPath:(id)arg1 withContext:(id)arg2;
- (id)searchableAttributesForProperty:(id)arg1;
@property(readonly) id inspectedObject;
@property(readonly) NSArray *inspectedObjects;
@property(readonly) NSBundle *bundle;
- (id)dvtExtraBindings;
- (void)didSetInspectedObjects:(id)arg1;
- (id)willSetInspectedObjects:(id)arg1;
- (void)setInspectedDocuments:(id)arg1;
- (void)editorDocumentShouldCommitEditing:(id)arg1;
- (BOOL)tracksDocuments;
- (void)regenerateView;
- (void)loadView;
- (id)sliceElement;
@property(readonly) IDEInspectorContentView *inspectorContentView;
- (id)aggregateReplacementBySettingValue:(id)arg1 forKeyPath:(id)arg2 onObject:(id)arg3 fromKeyPath:(id)arg4 ofObject:(id)arg5;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)selectedDocuments;
- (id)selection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

