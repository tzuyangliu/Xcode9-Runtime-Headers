//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension;

@interface _IDEDeferredInitializationInvocation : NSObject
{
    Class _initializerClass;
    int _options;
    DVTExtension *_extension;
}

- (void).cxx_destruct;
- (void)invokeWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)initWithInitalizerClass:(Class)arg1 options:(int)arg2 extension:(id)arg3;

@end

