//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingResult.h>

@class IBBitmap;

@interface IBRenderingProcessingResult : IBSceneUpdateProcessingResult
{
    IBBitmap *_bitmap;
    double _scaleFactor;
}

@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) IBBitmap *bitmap; // @synthesize bitmap=_bitmap;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithBitmap:(id)arg1 scaleFactor:(double)arg2;

@end
