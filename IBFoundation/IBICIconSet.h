//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAsset.h>

@interface IBICIconSet : IBICSlottedAsset
{
}

+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)defaultName;
+ (Class)assetRepClass;
+ (id)createInstanceNamed:(id)arg1 usingRenderer:(CDUnknownBlockType)arg2;
+ (id)createDefaultInstancesForUnitTesting;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)readIconRepIDsFromSnapshot:(id)arg1 results:(id)arg2;
- (id)outputFileName;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)assetRepForSlot:(id)arg1;
- (void)createChildrenForSlots:(id)arg1 usingRenderer:(CDUnknownBlockType)arg2;

@end
