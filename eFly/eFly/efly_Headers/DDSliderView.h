//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTAnimatedLabel, UIImageView;

@interface DDSliderView : UIView
{
    double sliderInitialX;
    double maxTranslation;
    _Bool _isLandscape;
    _Bool _enabled;
    long long _currentStatus;
    CDUnknownBlockType _block;
    MTAnimatedLabel *_animatedLabel;
    UIImageView *_slider;
}

@property(nonatomic) __weak UIImageView *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak MTAnimatedLabel *animatedLabel; // @synthesize animatedLabel=_animatedLabel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
- (void).cxx_destruct;
@property(nonatomic) long long sliderStatus; // @synthesize sliderStatus=_currentStatus;
- (void)stopSliderAnimating;
- (void)startSliderAnimating;
- (void)sliderPan:(id)arg1;
- (void)pan:(id)arg1;
- (void)updateView:(long long)arg1;
- (void)initData;
- (void)awakeFromNib;

@end

