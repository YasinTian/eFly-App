//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "M13ProgressView.h"

@class CADisplayLink, CAShapeLayer;

@interface M13ProgressViewPie : M13ProgressView
{
    _Bool _backgroundRingWidthOverriden;
    int _currentAction;
    double _backgroundRingWidth;
    double _animationFromValue;
    double _animationToValue;
    double _animationStartTime;
    CADisplayLink *_displayLink;
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_iconLayer;
    CAShapeLayer *_indeterminateLayer;
}

@property(nonatomic) int currentAction; // @synthesize currentAction=_currentAction;
@property(retain, nonatomic) CAShapeLayer *indeterminateLayer; // @synthesize indeterminateLayer=_indeterminateLayer;
@property(retain, nonatomic) CAShapeLayer *iconLayer; // @synthesize iconLayer=_iconLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double animationStartTime; // @synthesize animationStartTime=_animationStartTime;
@property(nonatomic) double animationToValue; // @synthesize animationToValue=_animationToValue;
@property(nonatomic) double animationFromValue; // @synthesize animationFromValue=_animationFromValue;
@property(nonatomic) double backgroundRingWidth; // @synthesize backgroundRingWidth=_backgroundRingWidth;
- (void).cxx_destruct;
- (void)drawIndeterminate;
- (void)drawIcon;
- (void)drawProgress;
- (void)drawBackground;
- (void)drawFailure;
- (void)drawSuccess;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)hideAnimation;
- (id)showAnimation;
- (void)setIndeterminate:(_Bool)arg1;
- (void)performAction:(int)arg1 animated:(_Bool)arg2;
- (void)animateProgress:(id)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setSecondaryColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) double progress; // @dynamic progress;

@end
