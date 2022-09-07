//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class M13ProgressView, NSString, UIColor, UIFont, UILabel;

@interface M13ProgressHUD : UIView
{
    UIView *backgroundView;
    UIView *maskView;
    UILabel *statusLabel;
    NSString *optimalStatusString;
    _Bool onScreen;
    _Bool _indeterminate;
    _Bool _applyBlurToBackground;
    _Bool _animationCentered;
    _Bool _dismissAfterAction;
    _Bool _shouldAutorotate;
    int _statusPosition;
    int _maskType;
    M13ProgressView *_progressView;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    double _progress;
    UIColor *_hudBackgroundColor;
    double _contentMargin;
    double _cornerRadius;
    UIColor *_maskColor;
    UIColor *_statusColor;
    UIFont *_statusFont;
    double _animationDuration;
    NSString *_status;
    long long _orientation;
    struct UIOffset _offsetFromCenter;
    struct CGSize _progressViewSize;
    struct CGPoint _animationPoint;
    struct CGSize _minimumSize;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
@property(nonatomic) _Bool dismissAfterAction; // @synthesize dismissAfterAction=_dismissAfterAction;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool animationCentered; // @synthesize animationCentered=_animationCentered;
@property(nonatomic) struct CGPoint animationPoint; // @synthesize animationPoint=_animationPoint;
@property(nonatomic) struct CGSize progressViewSize; // @synthesize progressViewSize=_progressViewSize;
@property(retain, nonatomic) UIFont *statusFont; // @synthesize statusFont=_statusFont;
@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(nonatomic) int maskType; // @synthesize maskType=_maskType;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double contentMargin; // @synthesize contentMargin=_contentMargin;
@property(nonatomic) struct UIOffset offsetFromCenter; // @synthesize offsetFromCenter=_offsetFromCenter;
@property(nonatomic) int statusPosition; // @synthesize statusPosition=_statusPosition;
@property(retain, nonatomic) UIColor *hudBackgroundColor; // @synthesize hudBackgroundColor=_hudBackgroundColor;
@property(nonatomic) _Bool applyBlurToBackground; // @synthesize applyBlurToBackground=_applyBlurToBackground;
@property(nonatomic) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(retain, nonatomic) M13ProgressView *progressView; // @synthesize progressView=_progressView;
- (double)angleForDeviceOrientation;
- (id)snapshotForBlurredBackgroundInView:(id)arg1;
- (void)redrawBlurs;
- (void)drawMask;
- (void)drawBackground;
- (void)drawRect:(struct CGRect)arg1;
- (void)recalculateOptimalStatusStringStructure;
- (void)layoutHUD;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)unregisterFromNotificationCenter;
- (void)registerForNotificationCenter;
- (void)dismiss:(_Bool)arg1;
- (void)hide:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (void)performAction:(int)arg1 animated:(_Bool)arg2;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (_Bool)isVisible;
- (void)setup;
- (id)initAndShowWithProgressView:(id)arg1 progress:(double)arg2 indeterminate:(_Bool)arg3 status:(id)arg4 mask:(int)arg5 inView:(id)arg6;
- (id)initWithProgressView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
