//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPFilterResultView.h"

@class TuSDKPFEditAdjustOptionBar, UIButton, UIView;

@interface TuSDKPFEditAdjustView : TuSDKCPFilterResultView
{
    TuSDKPFEditAdjustOptionBar *_optionBar;
    UIButton *_configCompleteButton;
    UIButton *_configCancalButton;
    UIView *_configActionContainer;
}

@property(readonly, nonatomic) UIButton *configCancalButton; // @synthesize configCancalButton=_configCancalButton;
@property(readonly, nonatomic) UIButton *configCompleteButton; // @synthesize configCompleteButton=_configCompleteButton;
@property(readonly, nonatomic) TuSDKPFEditAdjustOptionBar *optionBar; // @synthesize optionBar=_optionBar;
- (void).cxx_destruct;
- (void)setConfigViewHiddenState:(_Bool)arg1;
- (void)showConfigWithKey:(id)arg1;
- (void)lsqInitView;

@end

