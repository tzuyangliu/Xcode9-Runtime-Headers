//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/NSCopying-Protocol.h>

@interface IBLayoutGuide : NSObject <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (double)locationInView:(id)arg1;
- (struct CGPoint)endInView:(id)arg1;
- (struct CGPoint)startInView:(id)arg1;
- (BOOL)isHorizontal;
- (BOOL)isVertical;

@end

