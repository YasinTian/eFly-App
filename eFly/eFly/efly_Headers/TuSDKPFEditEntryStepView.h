//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TuSDKPFEditEntryStepView : UIView
{
    UIButton *_prevButton;
    UIButton *_nextButton;
}

@property(readonly, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, nonatomic) UIButton *prevButton; // @synthesize prevButton=_prevButton;
- (void).cxx_destruct;
- (void)needUpdateLayout;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

