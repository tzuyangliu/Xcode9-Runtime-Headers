//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingRequest.h>

@class NSObject, NSString;

@interface IBValueForKeyProcessingRequest : IBSceneUpdateProcessingRequest
{
    NSObject *_object;
    NSString *_keyPath;
}

@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 resultPhase:(long long)arg3 postProcessingBlock:(CDUnknownBlockType)arg4;

@end

