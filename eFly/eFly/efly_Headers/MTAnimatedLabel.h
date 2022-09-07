//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class CATextLayer, UIColor;

@interface MTAnimatedLabel : UILabel
{
    double _animationDuration;
    double _gradientWidth;
    UIColor *_tint;
    CATextLayer *_textLayer;
}

+ (long long)UITextAlignmentFromCAAlignment:(id)arg1;
+ (id)CAAlignmentFromUITextAlignment:(long long)arg1;
+ (Class)layerClass;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) UIColor *tint; // @synthesize tint=_tint;
@property(nonatomic) double gradientWidth; // @synthesize gradientWidth=_gradientWidth;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initializeLayers;

@end

