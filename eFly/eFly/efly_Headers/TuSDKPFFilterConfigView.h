//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TuSDKPFFilterSeekbarDelegate-Protocol.h"

@class NSMutableArray, NSString, TuSDKFilterWrap, UIButton;
@protocol TuSDKPFFilterConfigViewDelegate;

@interface TuSDKPFFilterConfigView : UIView <TuSDKPFFilterSeekbarDelegate>
{
    _Bool _isAniming;
    NSMutableArray *_seekBars;
    id <TuSDKPFFilterConfigViewDelegate> _delegate;
    UIButton *_resetButton;
    UIButton *_stateButton;
    UIView *_stateBg;
    UIView *_configWrap;
    TuSDKFilterWrap *_filterWrap;
}

@property(retain, nonatomic) TuSDKFilterWrap *filterWrap; // @synthesize filterWrap=_filterWrap;
@property(readonly, nonatomic) UIView *configWrap; // @synthesize configWrap=_configWrap;
@property(readonly, nonatomic) UIView *stateBg; // @synthesize stateBg=_stateBg;
@property(readonly, nonatomic) UIButton *stateButton; // @synthesize stateButton=_stateButton;
@property(readonly, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(nonatomic) __weak id <TuSDKPFFilterConfigViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onSeekbar:(id)arg1 changedFilterArg:(id)arg2;
- (void)requestRender;
- (id)buildSeekbarWithTop:(double)arg1;
- (void)resetConfigView;
- (void)handleShowStateAction;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleResetAction;
- (void)clean;
- (void)hiddenDefault;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

