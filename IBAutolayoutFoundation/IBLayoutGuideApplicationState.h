//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBLayoutCoordinateApplicationState, NSArray, NSSet;

@interface IBLayoutGuideApplicationState : NSObject
{
    IBLayoutCoordinateApplicationState *_x;
    IBLayoutCoordinateApplicationState *_y;
}

@property(readonly) IBLayoutCoordinateApplicationState *y; // @synthesize y=_y;
@property(readonly) IBLayoutCoordinateApplicationState *x; // @synthesize x=_x;
- (void).cxx_destruct;
@property(readonly) NSSet *allLayoutGuideMatches;
@property(readonly) NSArray *allGuides;
- (id)initWithXCoordinateState:(id)arg1 andYCoordinateState:(id)arg2;

@end

