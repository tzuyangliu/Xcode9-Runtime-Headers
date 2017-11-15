//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, IDEFileReference, NSArray, NSDate, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDESnapshotProjectItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    DVTFilePath *_projectLocation;
    int _projectStatus;
    NSDate *_lastOpenedDate;
    NSString *_projectTypeString;
    NSString *_statusString;
    BOOL _isCurrentlyOpen;
    DVTFilePath *_workspaceArenaLocation;
}

+ (id)keyPathsForValueAffectingDetailedStatusString;
@property(nonatomic) BOOL isCurrentlyOpen; // @synthesize isCurrentlyOpen=_isCurrentlyOpen;
@property(retain) DVTFilePath *workspaceArenaLocation; // @synthesize workspaceArenaLocation=_workspaceArenaLocation;
@property(readonly) int projectStatus; // @synthesize projectStatus=_projectStatus;
@property(retain, nonatomic) DVTFilePath *projectLocation; // @synthesize projectLocation=_projectLocation;
- (void).cxx_destruct;
- (id)detailedStatusString;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly) NSString *projectTypeString; // @synthesize projectTypeString=_projectTypeString;
- (id)statusString;
@property(readonly) NSDate *lastOpenedDate;
- (void)_updateStatus;
@property(readonly, copy) NSString *description;
- (void)assignPropertiesFromAnotherProjectItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

