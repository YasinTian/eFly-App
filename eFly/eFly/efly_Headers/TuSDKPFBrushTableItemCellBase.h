//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKICTableViewCell.h"

#import "TuSDKPFBrushTableItemCellInterface-Protocol.h"

@class NSString, TuSDKPFBrush, UIImageView;
@protocol TuSDKPFBrushTableItemCellDelegate;

@interface TuSDKPFBrushTableItemCellBase : TuSDKICTableViewCell <TuSDKPFBrushTableItemCellInterface>
{
    TuSDKPFBrush *_mode;
    UIImageView *_thumbView;
    id <TuSDKPFBrushTableItemCellDelegate> _delegate;
}

@property(nonatomic) __weak id <TuSDKPFBrushTableItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) TuSDKPFBrush *mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)viewNeedRest;
- (void)handleBlockView:(id)arg1 icon:(id)arg2;
- (void)handleTypeOnlie:(id)arg1;
- (void)handleTypeEraser:(id)arg1;
- (void)handleTypeBrush:(id)arg1;
- (_Bool)canHiddenRemoveFlag;
- (void)lsqInitView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

