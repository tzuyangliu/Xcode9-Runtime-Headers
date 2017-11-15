//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEIndexImportSession, NSString;

@interface IDEIndexClangTranslationUnit : NSObject
{
    NSString *_path;
    int _argc;
    const char **_argv;
    BOOL _isPCHFile;
    BOOL _shouldCreate;
    unsigned int _tuOptions;
    IDEIndexImportSession *_session;
    void *_cxIndex;
    struct CXTranslationUnitImpl *_cxTranslationUnit;
}

+ (void *)createCXIndexForSession:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)discard;
- (void)discardTU;
- (void)discardArgs;
- (void)logMemoryUsage;
- (void)logFailure;
- (void)logInvocation;
- (void)indexUsingDataSource:(id)arg1;
@property(readonly, nonatomic) struct CXTranslationUnitImpl *cxTranslationUnit;
- (void)resetArguments:(id)arg1;
- (id)initPCHWithPath:(id)arg1 arguments:(id)arg2 session:(id)arg3 shouldCreate:(BOOL)arg4;
- (id)initWithPath:(id)arg1 arguments:(id)arg2 session:(id)arg3;

@end

