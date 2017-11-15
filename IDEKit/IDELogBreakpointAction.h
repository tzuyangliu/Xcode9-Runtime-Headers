//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBreakpointAction.h>

#import <IDEKit/NSSpeechSynthesizerDelegate-Protocol.h>

@class NSString;

@interface IDELogBreakpointAction : IDEBreakpointAction <NSSpeechSynthesizerDelegate>
{
    int _conveyanceType;
    NSString *_message;
}

+ (id)propertiesAffectingPersistenceState;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property int conveyanceType; // @synthesize conveyanceType=_conveyanceType;
- (void).cxx_destruct;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setMessageFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (void)_logActionCommonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

