//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTSimpleSerialization-Protocol.h>
#import <IDEFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface IDEConsoleItem : NSObject <DVTSimpleSerialization, NSSecureCoding>
{
    unsigned long long _adaptorType;
    NSString *_content;
    double _timestamp;
    int _kind;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingOutputRequestedByUser;
+ (id)keyPathsForValuesAffectingPrompt;
+ (id)keyPathsForValuesAffectingOutput;
+ (id)keyPathsForValuesAffectingInput;
@property int kind; // @synthesize kind=_kind;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSString *content; // @synthesize content=_content;
@property(readonly) unsigned long long adaptorType; // @synthesize adaptorType=_adaptorType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)itemAsSubitems;
@property(readonly, getter=isError) BOOL error;
- (void)setError:(BOOL)arg1;
@property(readonly, getter=isOutputRequestedByUser) BOOL outputRequestedByUser;
- (void)setOutputRequestedByUser:(BOOL)arg1;
@property(readonly, getter=isPrompt) BOOL prompt;
- (void)setPrompt:(BOOL)arg1;
@property(readonly, getter=isOutput) BOOL output;
- (void)setOutput:(BOOL)arg1;
@property(readonly, getter=isInput) BOOL input;
- (void)setInput:(BOOL)arg1;
- (id)description;
- (id)initWithAdaptorType:(unsigned long long)arg1 content:(id)arg2 kind:(int)arg3;

@end

