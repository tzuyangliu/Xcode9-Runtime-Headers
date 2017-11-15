//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFilePath, IDEIndexSymbol, NSURL;
@protocol IDEIndexQueryProvider;

@interface IDEIndexSymbolOccurrence : NSObject
{
    long long _role;
    DVTDocumentLocation *_location;
    long long _objectId;
    long long _lineNumber;
    long long _column;
    DVTFilePath *_file;
    NSURL *_moduleURL;
    BOOL _lookedForCorrespondingSymbol;
    IDEIndexSymbol *_correspondingSymbol;
    NSObject<IDEIndexQueryProvider> *_queryProvider;
}

+ (id)newSymbolOccurrenceForSymbol:(id)arg1 role:(long long)arg2 location:(id)arg3 forQueryProvider:(id)arg4;
+ (id)newSymbolOccurrenceForSymbol:(id)arg1 objectId:(long long)arg2 role:(long long)arg3 lineNumber:(long long)arg4 column:(long long)arg5 file:(id)arg6 forQueryProvider:(id)arg7;
@property(readonly, nonatomic) NSObject<IDEIndexQueryProvider> *queryProvider; // @synthesize queryProvider=_queryProvider;
@property(readonly, nonatomic) long long column; // @synthesize column=_column;
@property(readonly, nonatomic) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly, nonatomic) long long objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (id)callees;
@property(readonly, nonatomic) DVTDocumentLocation *location;
@property(readonly, nonatomic) NSURL *moduleURL;
@property(readonly, nonatomic) DVTFilePath *file;
- (id)occurrence;
- (id)containingSymbol;
- (id)description;
- (void)setOccurrence:(id)arg1;
- (void)setRole:(long long)arg1 location:(id)arg2;
- (void)setObjectId:(long long)arg1 role:(long long)arg2 lineNumber:(long long)arg3 column:(long long)arg4 file:(id)arg5 moduleURL:(id)arg6;
- (void)setObjectId:(long long)arg1 role:(long long)arg2 lineNumber:(long long)arg3 column:(long long)arg4 file:(id)arg5;
- (id)correspondingSymbol;
- (id)initWithCorrespondingSymbol:(id)arg1 forQueryProvider:(id)arg2;
- (void)describeFields:(CDUnknownBlockType)arg1;

@end

