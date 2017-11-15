//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTMenuBuilder-Protocol.h>

@class NSString;

@interface IDEMenuBuilder : NSObject <DVTMenuBuilder>
{
}

+ (void)_replacePlaceholderItemWithTag:(unsigned long long)arg1 inMenu:(id)arg2 withGroups:(id)arg3 priorities:(id)arg4;
+ (void)_placePinnedGroups:(id)arg1 inMenu:(id)arg2 withPriorities:(id)arg3 topPinned:(BOOL)arg4;
+ (void)insertMenuItemsForContextualMenuItemIdentifier:(id)arg1 intoMenu:(id)arg2 forSubArea:(id)arg3 fileType:(id)arg4 editorDocumentExtension:(id)arg5;
+ (id)_buildSubmenuItemForMenuDefinitionIdentifier:(id)arg1 forViewController:(id)arg2 fillingExtensionIdToMenuMap:(id)arg3;
+ (void)_openHelpBookFromContextMenu:(id)arg1;
+ (id)contextHelpMenuItemForHelpID:(id)arg1 andTitle:(id)arg2;
+ (id)contextHelpMenuItemForHelpID:(id)arg1;
+ (void)_addHelpItemsToMenu:(id)arg1 fromExtension:(id)arg2;
+ (void)_appendItemsToMenu:(id)arg1 forMenuDefinitionIdentifier:(id)arg2 forViewController:(id)arg3 fillingExtensionIdToMenuMap:(id)arg4;
+ (void)appendItemsToMenu:(id)arg1 forMenuDefinitionIdentifier:(id)arg2 forViewController:(id)arg3 extensionIdToMenuMap:(id *)arg4;
+ (id)menuForMenuDefinitionIdentifier:(id)arg1 forViewController:(id)arg2 extensionIdToMenuMap:(id *)arg3;
+ (id)menuForMenuDefinitionIdentifier:(id)arg1 extensionIdToMenuMap:(id *)arg2;
+ (id)_menuItemForMenuItemElement:(id)arg1 inMenuWithIdentifierUsedForDebugging:(id)arg2 forViewController:(id)arg3 fillingExtensionIdToMenuMap:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

