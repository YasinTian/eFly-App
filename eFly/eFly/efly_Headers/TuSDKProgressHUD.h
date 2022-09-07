//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, LSQIndefiniteAnimatedView, NSTimer, UIControl, UIImageView, UILabel;

@interface TuSDKProgressHUD : UIView
{
    unsigned long long _maskType;
    NSTimer *_fadeOutTimer;
    UIControl *_overlayView;
    UIView *_hudView;
    UILabel *_stringLabel;
    UIImageView *_imageView;
    LSQIndefiniteAnimatedView *_indefiniteAnimatedView;
    double _progress;
    unsigned long long _activityCount;
    CAShapeLayer *_backgroundRingLayer;
    CAShapeLayer *_ringLayer;
    struct UIOffset _offsetFromCenter;
}

+ (_Bool)isVisible;
+ (void)resetOffsetFromCenter;
+ (void)setOffsetFromCenter:(struct UIOffset)arg1;
+ (void)dismiss;
+ (void)popActivity;
+ (void)showImage:(id)arg1 status:(id)arg2 maskType:(unsigned long long)arg3;
+ (void)showImage:(id)arg1 status:(id)arg2;
+ (void)showErrorWithStatus:(id)arg1 maskType:(unsigned long long)arg2;
+ (void)showErrorWithStatus:(id)arg1;
+ (void)showSuccessWithStatus:(id)arg1 maskType:(unsigned long long)arg2;
+ (void)showSuccessWithStatus:(id)arg1;
+ (void)showMessage:(id)arg1;
+ (void)showProgress:(float)arg1 status:(id)arg2 maskType:(unsigned long long)arg3;
+ (void)showProgress:(float)arg1 status:(id)arg2;
+ (void)showProgress:(float)arg1 maskType:(unsigned long long)arg2;
+ (void)showProgress:(float)arg1;
+ (void)showWithStatus:(id)arg1 maskType:(unsigned long long)arg2;
+ (void)showWithStatus:(id)arg1;
+ (void)showWithMaskType:(unsigned long long)arg1;
+ (void)show;
+ (void)setDefaultMaskType:(unsigned long long)arg1;
+ (void)setErrorImage:(id)arg1;
+ (void)setSuccessImage:(id)arg1;
+ (void)setRingThickness:(double)arg1;
+ (void)setFont:(id)arg1;
+ (void)setForegroundColor:(id)arg1;
+ (void)setBackgroundColor:(id)arg1;
+ (void)setStatus:(id)arg1;
+ (id)sharedView;
+ (void)showMainThreadErrorWithStatus:(id)arg1;
+ (void)showMainThreadSuccessWithStatus:(id)arg1;
+ (void)showMainThreadProgress:(float)arg1 withStatus:(id)arg2;
+ (void)showMainThreadWithMessage:(id)arg1;
+ (void)showMainThreadWithStatus:(id)arg1;
@property(nonatomic) struct UIOffset offsetFromCenter; // @synthesize offsetFromCenter=_offsetFromCenter;
@property(retain, nonatomic) CAShapeLayer *ringLayer; // @synthesize ringLayer=_ringLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundRingLayer; // @synthesize backgroundRingLayer=_backgroundRingLayer;
@property(nonatomic) unsigned long long activityCount; // @synthesize activityCount=_activityCount;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) LSQIndefiniteAnimatedView *indefiniteAnimatedView; // @synthesize indefiniteAnimatedView=_indefiniteAnimatedView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *stringLabel; // @synthesize stringLabel=_stringLabel;
@property(retain, nonatomic) UIView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) UIControl *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) NSTimer *fadeOutTimer; // @synthesize fadeOutTimer=_fadeOutTimer;
@property(nonatomic) unsigned long long maskType; // @synthesize maskType=_maskType;
- (void).cxx_destruct;
@property(readonly, nonatomic) double visibleKeyboardHeight;
@property(readonly, nonatomic, getter=isClear) _Bool clear;
- (double)displayDurationForString:(id)arg1;
- (id)createRingLayerWithCenter:(struct CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3 color:(id)arg4;
- (void)cancelRingLayerAnimation;
- (void)dismiss;
- (void)showImage:(id)arg1 status:(id)arg2 duration:(double)arg3 maskType:(unsigned long long)arg4;
- (id)image:(id)arg1 withTintColor:(id)arg2;
- (void)showProgress:(float)arg1 status:(id)arg2 maskType:(unsigned long long)arg3;
- (void)overlayViewDidReceiveTouchEvent:(id)arg1 forEvent:(id)arg2;
- (void)moveToPoint:(struct CGPoint)arg1 rotateAngle:(double)arg2;
- (void)positionHUD:(id)arg1;
- (id)notificationUserInfo;
- (void)registerNotifications;
- (void)setFadeOutTimer:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)updatePosition;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mainThreadErrorWithStatus:(id)arg1;
- (void)mainThreadSuccessWithStatus:(id)arg1;
- (void)mainThreadProgress:(float)arg1 andStatus:(id)arg2;
- (void)mainThreadWithMessage:(id)arg1;
- (void)mainThreadWithStatus:(id)arg1;

@end

