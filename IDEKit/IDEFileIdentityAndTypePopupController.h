//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSMenuItem, NSPopUpButton;
@protocol DVTCancellable;

@interface IDEFileIdentityAndTypePopupController : IDEInspectorProperty
{
    IDEInspectorKeyPath *_assignedFileTypeKeyPath;
    IDEInspectorKeyPath *_resolvedFilePathKeyPath;
    id <DVTCancellable> _popUpWillPopToken;
    NSMenuItem *_defaulItem;
    NSPopUpButton *_popup;
}

@property(retain, nonatomic) NSPopUpButton *popup; // @synthesize popup=_popup;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)tearDownRefreshTriggers;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)popUpButtonWillPopUp:(id)arg1;
- (void)refreshPopUpContent;
- (void)refreshPopUpTitle;
- (void)refreshPopUpSelection;
- (id)menuItemWithForFileDataType:(id)arg1;
- (void)showValueItem:(id)arg1;
- (void)showSyntheticTitle:(id)arg1 isPlaceholder:(BOOL)arg2;
- (id)defaultTypeDisplayValue;
- (id)displayedGroups;
- (BOOL)canSelectFileTypeFile;
- (BOOL)canSelectFileTypeDirectory;
- (id)nibName;
- (double)baseline;

@end
