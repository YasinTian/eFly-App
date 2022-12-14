//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSMutableArray;
@protocol TuSDKVideoCameraInterface;

@interface TuSDKCPFocusTouchViewBase : UIView
{
    _Bool _isCancelTouch;
    _Bool _isWaitCapture;
    struct CGPoint _lastTouchPoint;
    double _moveRange;
    NSMutableArray *_faceViews;
    double _faceDetectionFocusLastTime;
    _Bool _enableLongTouchCapture;
    _Bool _disableContinueFoucs;
    id <TuSDKVideoCameraInterface> _camera;
    long long _focusMode;
    double _autoFoucsDelay;
    double _longTouchDelay;
    double _faceDetectionRate;
    NSDate *_lastFaceDetection;
    struct CGRect _regionPercent;
}

@property(readonly, nonatomic) NSDate *lastFaceDetection; // @synthesize lastFaceDetection=_lastFaceDetection;
@property(nonatomic) struct CGRect regionPercent; // @synthesize regionPercent=_regionPercent;
@property(nonatomic) double faceDetectionRate; // @synthesize faceDetectionRate=_faceDetectionRate;
@property(nonatomic) double longTouchDelay; // @synthesize longTouchDelay=_longTouchDelay;
@property(nonatomic) double autoFoucsDelay; // @synthesize autoFoucsDelay=_autoFoucsDelay;
@property(nonatomic) _Bool disableContinueFoucs; // @synthesize disableContinueFoucs=_disableContinueFoucs;
@property(nonatomic) _Bool enableLongTouchCapture; // @synthesize enableLongTouchCapture=_enableLongTouchCapture;
@property(nonatomic) long long focusMode; // @synthesize focusMode=_focusMode;
@property(nonatomic) id <TuSDKVideoCameraInterface> camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (void)faceDetectionAutofocus:(struct CGRect)arg1;
- (struct CGRect)transforRect:(struct CGRect)arg1 imageRect:(struct CGRect)arg2;
- (struct CGRect)makeRectRelativeImage:(struct CGSize)arg1;
- (void)notifyFaceDetection:(id)arg1 size:(struct CGSize)arg2;
- (void)cancelHiddenFaceViews;
- (void)delayHiddenFaceViews;
- (void)hiddenFaceViews;
- (id)buildFaceDetectionView;
- (struct CGPoint)convertFocusPointFromTouchPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertFocusPointFromPercentPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertPercentPointFromTouchPoint:(struct CGPoint)arg1;
- (void)notifyCameraWithFocusPoint:(struct CGPoint)arg1;
- (_Bool)isInRegionWithPoint:(struct CGPoint)arg1;
- (struct CGRect)computerRegionRect;
- (_Bool)onFocusWithPoint:(struct CGPoint)arg1;
- (void)resetFoucsCenter;
- (_Bool)isSupportFocusMode;
- (void)cancelAutoFocus;
- (void)waitAutoFocus;
- (void)autoFocus;
- (void)cameraStateChanged:(long long)arg1;
- (void)onAdjustingFocus:(_Bool)arg1;
- (void)cancelLongTouched;
- (void)waitLongTouched;
- (void)longTouched;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

