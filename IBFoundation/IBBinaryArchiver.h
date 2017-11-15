//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableArray;
@protocol IBObjectRepresentationTranslator;

@interface IBBinaryArchiver : NSObject
{
    NSMapTable *_objectToOIDMap;
    struct {
        unsigned long long length;
        unsigned long long capacity;
        char *bytes;
    } _buffer;
    unsigned long long _nextOID;
    BOOL _finished;
    NSMutableArray *_externalDataArray;
    NSMutableArray *_objectTranslationDelegateStack;
    NSArray *_archiveDataArray;
    NSDictionary *_context;
}

+ (id)archivedDataArrayWithRootObject:(id)arg1 context:(id)arg2;
+ (id)archiveDataArrayWithContext:(id)arg1 byRunningBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(readonly) NSArray *archiveDataArray; // @synthesize archiveDataArray=_archiveDataArray;
- (void).cxx_destruct;
- (void)encodeObjectReferenceIfPossible:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeClass:(Class)arg1;
- (void)encodeCStringClassName:(const char *)arg1;
- (void)encodeObjectReference:(id)arg1;
- (void)encodeUTF8RepresentationOfString:(id)arg1;
- (void)encodeRange:(struct _NSRange)arg1;
- (void)encodeInset:(CDStruct_c519178c)arg1;
- (void)encodeCGRect:(struct CGRect)arg1;
- (void)encodeCGSize:(struct CGSize)arg1;
- (void)encodeCGPoint:(struct CGPoint)arg1;
- (void)encodeCGFloat:(double)arg1;
- (void)encodeDouble:(double)arg1;
- (void)encodeBool:(BOOL)arg1;
- (void)encodeUnsignedInteger:(unsigned long long)arg1;
- (void)encodeUInt64:(unsigned long long)arg1;
- (void)encodeInteger:(long long)arg1;
- (void)encodeInt64:(long long)arg1;
- (void)encodeData:(id)arg1;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)encodeHeader;
- (void)finishEncoding;
- (void)popObjectTranslationDelegate:(id)arg1;
- (void)pushObjectTranslationDelegate:(id)arg1;
@property(readonly, nonatomic) __weak NSObject<IBObjectRepresentationTranslator> *currentObjectTranslationDelegate;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

