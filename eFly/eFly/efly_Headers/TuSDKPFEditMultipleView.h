//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TuSDKPFEditEntryStepView, TuSDKPFEditMultipleOptionBar, UIButton, UIImageView;

@interface TuSDKPFEditMultipleView : UIView
{
    TuSDKPFEditEntryStepView *_stepView;
    UIButton *_autoAdjustButton;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    TuSDKPFEditMultipleOptionBar *_optionBar;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) TuSDKPFEditMultipleOptionBar *optionBar; // @synthesize optionBar=_optionBar;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIButton *autoAdjustButton; // @synthesize autoAdjustButton=_autoAdjustButton;
@property(readonly, nonatomic) TuSDKPFEditEntryStepView *stepView; // @synthesize stepView=_stepView;
- (void).cxx_destruct;
- (void)needUpdateLayout;
- (void)lsqInitView;

@end

