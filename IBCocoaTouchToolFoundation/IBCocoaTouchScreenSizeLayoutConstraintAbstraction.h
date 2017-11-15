//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAbstractLayoutConstraintAbstraction.h>

@class NSObject;
@protocol IBAutolayoutItem;

@interface IBCocoaTouchScreenSizeLayoutConstraintAbstraction : IBAbstractLayoutConstraintAbstraction
{
    NSObject<IBAutolayoutItem> *_topLevelView;
    double _size;
    unsigned long long _attribute;
}

@property(nonatomic) unsigned long long attribute; // @synthesize attribute=_attribute;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) NSObject<IBAutolayoutItem> *topLevelView; // @synthesize topLevelView=_topLevelView;
- (void).cxx_destruct;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
- (id)constraintInDocument;
- (unsigned long long)hash;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (id)description;
- (BOOL)isWidth;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithScreenSize:(double)arg1 attribute:(unsigned long long)arg2 topLevelView:(id)arg3;

@end

