//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractTextureSetRepSlot.h>

@interface IBICFlatTextureSetRepSlot : IBICAbstractTextureSetRepSlot
{
}

+ (Class)assetSetClass;
+ (id)orderedComponentClasses;
+ (id)slotWithIdiom:(id)arg1 scale:(id)arg2;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)slotWithIdiom:(id)arg1;
+ (id)slotFilterWithIdiomFilter:(id)arg1 scaleFilter:(id)arg2 memoryFilter:(id)arg3 graphicsFeatureSetFilter:(id)arg4 colorSpaceFilter:(id)arg5;
+ (id)slotFilterWithNilMatching:(long long)arg1 idioms:(id)arg2 scales:(id)arg3 memoryClasses:(id)arg4 graphicsFeatureSets:(id)arg5 colorSpaces:(id)arg6;
+ (id)slotFilterUnionedWithStandardUniversalCounterpart:(BOOL)arg1 idioms:(id)arg2 scales:(id)arg3 memoryClasses:(id)arg4 graphicsFeatureSets:(id)arg5 colorSpaces:(id)arg6;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;

@end
