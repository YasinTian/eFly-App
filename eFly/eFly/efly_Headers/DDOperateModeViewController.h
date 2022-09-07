//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDBaseViewController.h"

@class UIButton, UIImageView;

@interface DDOperateModeViewController : DDBaseViewController
{
    UIButton *_switchModeButton;
    UIImageView *_modeHintView;
}

@property(retain, nonatomic) UIImageView *modeHintView; // @synthesize modeHintView=_modeHintView;
@property(retain, nonatomic) UIButton *switchModeButton; // @synthesize switchModeButton=_switchModeButton;
- (void).cxx_destruct;
- (void)updateSwitchControlButton:(unsigned long long)arg1;
- (void)initUI;
- (void)initData;
- (void)switchControlMode;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
