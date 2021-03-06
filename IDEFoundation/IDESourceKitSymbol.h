//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceKitSymbolOccurrence.h>

#import <IDEFoundation/IDEAutoImportable-Protocol.h>

@class DVTFilePath, DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, IDEIndexCollection, IDESourceKitContainerSymbol, NSString, _TtC13DVTFoundation9DVTSymbol;

@interface IDESourceKitSymbol : IDESourceKitSymbolOccurrence <IDEAutoImportable>
{
    NSString *_name;
    NSString *_displayName;
    NSString *_qualifiedDisplayName;
    DVTSourceCodeSymbolKind *_symbolKind;
    DVTSourceCodeLanguage *_symbolLanguage;
    NSString *_resolution;
    _TtC13DVTFoundation9DVTSymbol *_identifier;
    BOOL _haveModelOccurrence;
    BOOL _isVirtual;
    BOOL _isInProject;
    BOOL _isSystem;
    NSString *_moduleName;
    NSString *_completionString;
    BOOL _lookedForContainerSymbol;
    IDESourceKitContainerSymbol *_containerSymbol;
}

+ (id)newSymbolOfKind:(id)arg1 language:(id)arg2 name:(id)arg3 displayName:(id)arg4 qualifiedDisplayName:(id)arg5 moduleName:(id)arg6 resolution:(id)arg7 isVirtual:(BOOL)arg8 isInProject:(BOOL)arg9 isSystem:(BOOL)arg10 role:(long long)arg11 location:(id)arg12 line:(long long)arg13 column:(long long)arg14 file:(id)arg15 moduleUrl:(id)arg16 completion:(id)arg17 forSourceKitWorkspace:(id)arg18;
+ (Class)classForSymbolKind:(id)arg1;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) BOOL isSystem; // @synthesize isSystem=_isSystem;
@property(nonatomic) BOOL isInProject; // @synthesize isInProject=_isInProject;
@property(nonatomic) BOOL isVirtual; // @synthesize isVirtual=_isVirtual;
@property(readonly, nonatomic) DVTSourceCodeLanguage *symbolLanguage; // @synthesize symbolLanguage=_symbolLanguage;
@property(readonly, nonatomic) DVTSourceCodeSymbolKind *symbolKind; // @synthesize symbolKind=_symbolKind;
@property(readonly, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)gkInspectableProperties;
- (id)ibOutletCollectionProperties;
- (id)ibOutletCollectionVariables;
- (id)ibOutletCollections;
- (id)ibOutletProperties;
- (id)ibOutletVariables;
- (id)ibOutlets;
- (id)ibActionMethods;
- (id)properties;
- (id)instanceVariables;
- (id)classVariables;
- (id)instanceMethods;
- (id)classMethods;
@property(readonly, nonatomic, getter=isAutoImportable) BOOL autoImportable;
@property(readonly, nonatomic) DVTFilePath *filePathToHeaderToImport;
@property(readonly, nonatomic) NSString *completionString;
- (id)qualifiedDisplayName;
- (id)displayName;
- (id)ibRelationClass;
- (id)references;
- (id)referencingFiles;
- (id)containerSymbol;
- (id)containerSymbols;
@property(readonly, nonatomic) IDEIndexCollection *definitions;
- (id)declarations;
- (id)occurrences;
- (id)correspondingSymbol;
- (id)location;
- (id)file;
- (long long)column;
- (long long)lineNumber;
- (long long)role;
- (id)occurrence;
@property(readonly, nonatomic) BOOL hasOccurrence;
- (void)setModelOccurrence:(id)arg1;
- (id)modelOccurrence;
@property(readonly, nonatomic, getter=isInProject) BOOL inProject;
@property(readonly, nonatomic) BOOL navigationPrefersDefinition;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *identifier;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)resetWithKind:(id)arg1 language:(id)arg2 name:(id)arg3 displayName:(id)arg4 qualifiedDisplayName:(id)arg5 moduleName:(id)arg6 resolution:(id)arg7 isVirtual:(BOOL)arg8 isInProject:(BOOL)arg9 isSystem:(BOOL)arg10 completion:(id)arg11;
- (id)sourcekit_asRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

