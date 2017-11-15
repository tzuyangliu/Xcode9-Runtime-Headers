//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTImageAndTextCell.h>

@protocol IDEDataValue;

@interface IDEVariablesViewCell : DVTImageAndTextCell
{
    id <IDEDataValue> _dataValue;
}

@property(readonly) id <IDEDataValue> dataValue; // @synthesize dataValue=_dataValue;
- (void).cxx_destruct;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_rectForValueInFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_setupCell;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_ideVariablesViewCell_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

