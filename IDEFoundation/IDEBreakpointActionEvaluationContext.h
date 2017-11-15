//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEConsoleAdaptor, IDEDebugSession;

@interface IDEBreakpointActionEvaluationContext : NSObject
{
    IDEDebugSession *_debugSession;
    IDEConsoleAdaptor *_consoleAdaptor;
    unsigned long long _selectedThreadIndex;
    unsigned long long _selectedFrameIndex;
}

@property(readonly) unsigned long long selectedFrameIndex; // @synthesize selectedFrameIndex=_selectedFrameIndex;
@property(readonly) unsigned long long selectedThreadIndex; // @synthesize selectedThreadIndex=_selectedThreadIndex;
@property(readonly) IDEConsoleAdaptor *consoleAdaptor; // @synthesize consoleAdaptor=_consoleAdaptor;
@property(readonly) IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
- (void).cxx_destruct;
- (id)initWithDebugSession:(id)arg1 consoleAdaptor:(id)arg2 selectedThreadIndex:(unsigned long long)arg3 selectedFrameIndex:(unsigned long long)arg4;

@end

