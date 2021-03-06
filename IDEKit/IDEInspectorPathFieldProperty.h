//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDEKit/DVTFilePathFieldCellDelegate-Protocol.h>

@class DVTFilePathField, IDEInspectorKeyPath, NSString;

@interface IDEInspectorPathFieldProperty : IDEInspectorProperty <DVTFilePathFieldCellDelegate>
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_placeholderKeyPath;
    NSString *_placeholder;
    IDEInspectorKeyPath *_choosePathMessageKeyPath;
    NSString *_choosePathMessage;
    IDEInspectorKeyPath *_linkPathKeyPath;
    IDEInspectorKeyPath *_choosePathDefaultFilePathKeyPath;
    IDEInspectorKeyPath *_shouldChooseFileKeyPath;
    IDEInspectorKeyPath *_shouldChooseDirKeyPath;
    BOOL _shouldChooseFile;
    BOOL _shouldChooseDir;
    BOOL _shouldCreateDirIfMissing;
    DVTFilePathField *_filePathField;
}

@property(retain, nonatomic) DVTFilePathField *filePathField; // @synthesize filePathField=_filePathField;
- (void).cxx_destruct;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)userDidChangeValue:(id)arg1;
- (void)primitiveInvalidate;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)view;
- (double)baseline;

@end

