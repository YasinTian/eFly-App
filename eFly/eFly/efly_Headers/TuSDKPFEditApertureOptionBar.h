//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TuSDKPFEditApertureOptionBar : UIView
{
    UIButton *_closeButton;
    UIButton *_radialButton;
    UIButton *_linearButton;
}

@property(readonly, nonatomic) UIButton *linearButton; // @synthesize linearButton=_linearButton;
@property(readonly, nonatomic) UIButton *radialButton; // @synthesize radialButton=_radialButton;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)needUpdateLayout;
- (id)buildButtonWithWidth:(double)arg1 left:(double)arg2 action:(unsigned long long)arg3;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

