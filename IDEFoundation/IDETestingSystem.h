//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDETestingSystem : NSObject
{
    NSString *_name;
    NSString *_identifier;
    Class _testableClass;
}

+ (id)testingSystems;
+ (id)testingSystemForIdentifier:(id)arg1;
+ (id)_testingSystemForExtension:(id)arg1;
+ (void)initialize;
@property(readonly) Class testableClass; // @synthesize testableClass=_testableClass;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTestingSystemExtension:(id)arg1;

@end

