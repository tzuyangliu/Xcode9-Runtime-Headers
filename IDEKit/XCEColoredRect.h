//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor;

@interface XCEColoredRect : NSObject
{
    struct _NSRange _range;
    struct CGRect _rect;
    NSColor *_color;
    id _reference;
}

@property(retain, nonatomic) id reference; // @synthesize reference=_reference;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;

@end

