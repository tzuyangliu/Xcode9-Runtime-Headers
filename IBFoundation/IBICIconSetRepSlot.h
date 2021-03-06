//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICImageSlot.h>

@class IBICColorSpace, IBICScale, IBICSize;

@interface IBICIconSetRepSlot : IBICImageSlot
{
    IBICSize *_size;
    IBICScale *_scale;
    IBICColorSpace *_colorSpace;
}

+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)orderedComponentClasses;
+ (id)slotWithSize:(id)arg1 scale:(id)arg2 colorSpace:(id)arg3;
+ (id)slotForFileName:(id)arg1;
+ (id)requiredFileNamesToSlots;
+ (id)allSlots;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotFilterWithSizeFilter:(id)arg1 scaleFilter:(id)arg2 colorSpaceFilter:(id)arg3;
@property(readonly) IBICColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICSize *size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasColorSpace;
- (id)requiredPixelSize;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaPath;
- (id)requiredFileName;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (void)captureComponents;

@end

