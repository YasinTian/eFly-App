//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TuSDKPFEditStickerBottomBar : UIView
{
    UIButton *_cancelButton;
    UIButton *_completeButton;
    UIButton *_listButton;
    UIButton *_onlineButton;
}

@property(readonly, nonatomic) UIButton *onlineButton; // @synthesize onlineButton=_onlineButton;
@property(readonly, nonatomic) UIButton *listButton; // @synthesize listButton=_listButton;
@property(readonly, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

