//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractStickerItem.h>

#import <IBFoundation/IBICCompilableSticker-Protocol.h>

@class IBICManifestArchivist, NSString;

@interface IBICSticker : IBICAbstractStickerItem <IBICCompilableSticker>
{
    IBICManifestArchivist *_manifestArchivist;
    NSString *_accessibilityLabel;
}

+ (BOOL)displayNameIsItemName;
+ (Class)requiredChildrenClass;
+ (Class)requiredParentClass;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (BOOL)fileNameIsIdentifier;
+ (id)stickersFromPaths:(id)arg1;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)createInstanceNamed:(id)arg1 baseSize:(struct CGSize)arg2 usingRenderer:(CDUnknownBlockType)arg3;
+ (id)createDefaultInstancesForUnitTesting;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (void).cxx_destruct;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)manifestContent;
- (id)manifestFileName;
- (id)initializeManifestArchivist;
- (id)child;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (id)defaultUnqualifiedRuntimeName;
- (id)init;
- (BOOL)compileToPath:(id)arg1 options:(id)arg2 results:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
