//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEOpenQuicklyQueryPattern, NSNumber;

@interface IDEOpenQuicklyQueryUserInput : NSObject
{
    IDEOpenQuicklyQueryPattern *_pattern;
    NSNumber *_explicitLineNumber;
}

+ (void)extractPatternText:(id *)arg1 andExplicitLineNumber:(id *)arg2 fromString:(id)arg3;
@property(readonly) NSNumber *explicitLineNumber; // @synthesize explicitLineNumber=_explicitLineNumber;
@property(readonly) IDEOpenQuicklyQueryPattern *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (id)initWithPattern:(id)arg1 explicitLineNumber:(id)arg2;
- (id)initWithText:(id)arg1;

@end

